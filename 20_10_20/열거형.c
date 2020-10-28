//#include <stdio.h>
//
//enum season { SPRING, SUMMER, FALL, WINTER }; // 열거형 선언
//// SPFING == 0, SUMMER == 1, FALL == 2, WINTER == 3
//// enum season { SPRING = 5, SUMMER, FALL = 10, WINTER };
//int main(void)
//{
//	enum season ss; // 열거형 변수 선언(int형과 같은 크기)
//	char* pc = NULL; // 문자열 포인터
//
//	ss = SPRING; // 열거 멤버값 대입
//	switch (ss)
//	{
//	case SPRING:
//		pc = "inline"; break;
//	case SUMMER:
//		pc = "swimming"; break;
//	case FALL:
//		pc = "trip"; break;
//	case WINTER:
//		pc = "skiing"; break;
//	}
//	printf("나의 레저 활동 => %s\n", pc);
//
//	return 0;
//}