//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10; // 정수만 가능
//	int b = 12;
//
//	printf("a & b : %d\n", a & b); // 모두 1일때
//	printf("a ^ b : %d\n", a ^ b); // 서로 다를떄
//	printf("a | b : %d\n", a | b); // 하나라도 1일때
//	printf("~a : %d\n", ~a); // 비트 반전
//	printf("a << b : %d\n", a << 1); // 왼쪽으로 비트 이동(0으로 채워짐)
//	printf("a >> b : %d\n", a >> 2); 
//
//	a = 10, b = 5;
//	int res;
//
//	res = a / b * 2;
//	printf("res = %d\n", res);
//	res = ++a * 3;
//	printf("res = %d\n", res);
//	res = a > b && a != 5;
//	printf("res = %d\n", res);
//	res = a % 3 == 0;
//	printf("res = %d\n", res);
//
//	return 0;
//}

// 오른쪽으로 이동(음수일 경우 왼쪽 비트 모두 1로 채움) unsigned일 경우 0
// ~제외 복합대입 연산자 가능
// 단항 > 이항 > 삼항 순. 산술 연산 > 비트 이동> 관계 > 논리 연산 순
// 우선순위 같을 경우 연산 왼->오. 대입, 단항은 오->왼