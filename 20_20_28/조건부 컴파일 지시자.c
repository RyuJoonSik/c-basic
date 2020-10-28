//#include <stdio.h>
//#define VER 6
//#define BIT16
//
//int main(void)
//{
//	int max;
//
//#if VER  >= 6 // 정수 상수나 정수로 치환되는 매크로 상수로 만든 식을 사용
//	printf("버전 %d입니다.\n", VER);
//#endif
//
//#ifdef BIT16  // 특정 매크로명이 정의되어 있는지 검사
//	max = 32767;
//#else
//	max = 2147483647;
//#endif
//
//#if(defined(BIT16) && (VER >= 6))
//	max = 2147483647;
//#endif
//
//#if VER >= 6
//	printf("버전 %d입니다.\n", VER);
//#else
//#error 컴파일 버전은 6.0 이상이어야 합니다.
//#endif
//
//	printf("int형 변수의 최댓값 : %d\n", max);
//
//	return 0;
//}