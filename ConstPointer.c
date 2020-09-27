//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20;
//	const int* pa = &a;
//
//	printf("변수 a의 값 : %d\n", *pa);
//	pa = &b;
//	printf("변수 b의 값 : %d\n", *pa);
//	pa = &a;
//	a = 20;
//	printf("변수 a의 값 : %d\n", *pa);
//
//	return 0;
//}
//
///* const를 붙여도 가르키는 주소 값은 바꿀 수 있다. 하지만 포인터 변수를 통해
//간접 참조하여 값을 바꾸는 것은 안된다.
//*pa = 20;(X)*/