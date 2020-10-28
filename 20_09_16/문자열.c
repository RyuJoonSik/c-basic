//#include <stdio.h>
//
//int main(void)
//{
//	char fruit[20] = "strawberry"; // \0때문에 문자 길이 + 1 의 길이 배열 필요
//
//	printf("딸기 : %s\n", fruit); // %s : 배열명
//	printf("딸기쨈 : %s %s\n", fruit, "jam"); // 문자열 상수(jam) 출력
//
//	return 0;
//}

/*선언에 따라 크기가 달라지는 char배열은 대입 연산을 사용할 수 없다.
또한 배열명은 주소 상수이므로 대입 연산자 왼쪽에 올 수 없다.
fruit = "strawberry"(불가)*/