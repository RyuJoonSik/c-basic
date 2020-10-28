//#include <stdio.h>
//
//void add_ten(int* pa);
//
//int main(void)
//{
//	int a = 10;
//
//	add_ten(&a); // 주소를 인수로 전달.
//	printf("a : %d\n", a); // 증가된 a값.
//
//	return 0;
//}
//
//void add_ten(int* pa) // 포인터 pa가 a의 주소를 받는다.
//{
//	*pa = *pa + 10; // 포인터 pa가 가리키는 변수의 값 10 증가.
//}