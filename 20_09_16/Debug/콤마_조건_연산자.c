//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20;
//	int res;
//
//	res = (++a, ++b); // 차례로 연산 수행. b값 저장
//	// res = ++a, ++b; 대입연산 우선. res = ++a; ++b;
//	printf("a : %d, b : %d\n", a, b);
//	printf("res : %d\n", res);
//
//	a = 10, b = 20;
//	res = (a > b) ? a : b;
//	printf("큰 값 : %d\n", res);
//
//	(a > b) ? (res = b) : (res = a);
//	printf("작은 값 : %d\n", res);
//
//	return 0;
//}
/* 제어문에서 조건식을 나열하는 괄호 안과 같이 세미콜론 사용이 불가능한 구조에서 사용*/