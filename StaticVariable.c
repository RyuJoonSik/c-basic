//#include <stdio.h>
//
//void auto_func(void);
//void static_func(void);
//
//int main(void)
//{
//	int i;
//
//	printf("일반 지역 변수(auto)를 사용한 함수...\n");
//	for (i = 0; i < 3; i++)
//	{
//		auto_func(); // 함수 호출과 반환 후 메모리에서 제거.
//	}
//
//	printf("정적 지역 변수(static)을 사용한 함수...\n");
//	for (i = 0; i < 3; i++)
//	{
//		static_func(); // 정적 지역 변수는 실행부터 프로그램이 끝날 때까지 존재.
//					   // 0으로 자동 초기화.
//	}
//
//	return 0;
//}
//
//void auto_func(void)
//{
//	auto int a = 0;
//
//	a++;
//	printf("%d\n", a);
//} 
//
//void static_func(void)
//{
//	static int a; // 정적 지역 변수 선언. 코드 블록 안에 선언.
//
//	a++;
//	printf("%d\n", a);
//}