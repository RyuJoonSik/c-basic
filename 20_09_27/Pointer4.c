//#include <stdio.h>
//
//void swap(int* pa, int* pb); // 함수 선언
//
//int main(void)
//{
//	int a = 10, b = 20;
//
//	swap(&a, &b);
//	printf("a : %d, b : %d\n", a, b);
//
//	return 0;
//}
//
//void swap(int* pa, int* pb)
//{
//	int temp;
//	temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//
//// 포인터 사용 이유 : 함수 안에 선언된 변수는 사용 범위가 함수 내부로 제한되므로
////					다른 함수에서 사용하기 위해서 주소값으로 호출 하여 사용해야한다.