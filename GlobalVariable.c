//#include <stdio.h>
//
//void assign10(void);
//void assign20(void);
//
//int a; // 전역 변수 선언. 프로그램이 실행될 때 메모리에 할당되고 끝날 때까지 존재
//
//int main(void)
//{
//	printf("함수 호출 전 a 값 : %d\n", a); // 0 자동 초기화.
//
//	assign10();
//	assign20();
//
//	printf("함수 호출 후 a 값 : %d\n", a);
//
//	return 0;
//}
//
//void assign10(void)
//{
//	a = 10;
//}
//
//void assign20(void)
//{
//	int a;	// 전역 변수와 같은 이름의 지역 변수 선언
//			// 지역변수가 먼저 사용된다.
//	a = 20;
//}