//#include <stdio.h>
//
//void add_ten(int a);
//
//int main(void)
//{
//	int a = 10;
//
//	add_ten(a); // a 값을 복사하여 전달
//	printf("a : %d\n", a);
//
//	return 0;
//}
//
//void add_ten(int a) // 7행의 a와 다른 독립적인 저장 공간 할당
//{
//	a = a + 10;
//}
//
//// 호출된 함수에 값을 복사하여 전달하는 방식은 값을 출력하거나 연산하는 경우와 같이
//// 호출하는 함수의 값을 바꿀 필요가 없는 경우에 사용한다.