//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10, b = 20;
//
//	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
//	{ // a,b는 블록 밖에 선언하였으므로 언제든 사용 가능
//		int temp;
//
//		temp = a;
//		a = b;
//		b = temp;
//	} // temp사용 끝. 메모리 반환.
//
//	printf("교환 후 a와 b의 값 : %d, %d\n", a, b);
//
//	return 0;
//}