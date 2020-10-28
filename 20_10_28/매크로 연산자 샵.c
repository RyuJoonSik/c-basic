//#include <stdio.h>
//// 컴파일러는 여러 개의 문자열을 연속으로 사용하면 하나의 문자열로 연결해 처리
//#define PRINT_EXPR(x) printf(#x " = %d\n", x);
//// ##연산자는 2개의 토큰을 붙여서 하나로 만드는 연산자
//#define NAME_CAT(x, y) (x ## y)
//
//int main(void)
//{
//	int a1, a2;
//
//	NAME_CAT(a, 1) = 10; // (a1) = 10;
//	NAME_CAT(a, 2) = 20;
//	PRINT_EXPR(a1 + a2); // printf("a1 + a2" " = %d\n", a1 + a2);
//	PRINT_EXPR(a2 - a1);
//	
//	return 0;
//}