//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;
//	int* pi;
//	int** ppi; // 이중 포인터 선언
//	// 이중 포인터도 가리키는 포인터의 형태에 맞춰 선언해야 한다.
//	// 첫 번째 별은 가리키는 변수의 자료형, 두 번째 별은 자신의 자료형을 의미.
//
//	pi = &a;
//	ppi = &pi; // 포인터의 주소를 저장한 이중 포인터
//
//	printf("-------------------------------\n");
//	printf("변수  변숫값  &연산  *연산  **연산\n");
//	printf("-------------------------------\n");
//	printf("  a%10d%10u\n", a, &a);
//	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
//	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
//	printf("-------------------------------\n");
//
//	return 0;
//}
//
