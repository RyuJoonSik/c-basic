//#include <stdio.h>
//#include <stdlib.h> // malloc, free 함수 사용을 위한 헤더 파일
//
//int main(void)
//{
//	int* pi;
//	double* pd;
//
//	pi = (int*)malloc(sizeof(int)); // 메모리 동적 할당 후 포인터 연결
//	if (pi == NULL) // 동적 할당 실패 시(반환값 검사 과정 필수)
//	{
//		printf("# 메모리가 부족합니다.\n"); // 예외 상황 메시지 
//		exit(1); // 프로그램 종료
//	}
//
//	pd = (double*)malloc(sizeof(double));
//
//	*pi = 10; // 포인터로 동적 할당 영역 사용
//	*pd = 3.4;
//
//	printf("정수형으로 사용 : %d\n", *pi); // 동적 할당 영역에 저장된 값 출력
//	printf("실수형으로 사용 : %.1f\n", *pd);
//
//	free(pi);	// 동적 할당 영역 반환(필수)
//	free(pd);
//
//	return 0;
//}