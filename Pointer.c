<<<<<<< HEAD
#include <stdio.h>

int main(void)
{
	int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %u\n", &a); // 주소 연산자 &
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %u\n", &c);

	printf("int형 변수의 주소 : %p\n", &a);
	printf("double형 변수의 주소 : %p\n", &b);
	printf("char형 변수의 주소 : %p\n", &c);

	return 0;
}
=======
//#include <stdio.h>
//
//int main(void)
//{
//	int a;
//	int* pa;
//
//	pa = &a;
//	*pa = 10; // 간접 참조 연산자(*) 혹은 포인터 연산자
//
//	printf("포인터로 a 값 출력 : %d\n", *pa);
//	printf("변수명으로 a 값 출력 : %d\n", a);
//
//	return 0;
//
//	// scanf("%d", &a) 와 scanf("%d", pa)는 같다.
//}
>>>>>>> 2e79bee610a3942467f520b3086a32d0d5c16094
