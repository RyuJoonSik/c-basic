//#include <stdio.h>
//
//void assign(void);
//
//int main(void)
//
//{
//	auto int a = 0; // auto 는 생략가능. 지역 변수 == 자동 변수(auto variable)
//
//	assign();
//	printf("main 함수 a : %d\n", a);
//
//	return 0;
//}
//
//void assign(void)
//{
//	int a; // assign 함수 안에 선언된 a. main 함수에 있는 a와는 별개.
//
//	a = 10;
//	printf("assign 함수 a : %d\n", a);
//}