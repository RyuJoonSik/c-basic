//#include <stdio.h>
//
//int sum(int x, int y); // 함수 선언(반환형 + 함수명 + 매개변수)
//// main 함수 앞에 선언. int sum(int, int)도 같은 표현.
//int main(void)
//{
//	int a = 10, b = 20;
//	int result;
//
//	result = sum(a, b); // 함수 호출
//	printf("result : %d\n", result);
//
//	return 0;
//}
//
//int sum(int x, int y) // 함수 정의
//{
//	int temp;
//	temp = x + y;
//	return temp; // return은 함수의 실행결과를 돌려주는 제어문
//}
//
//// 함수 정의(main 함수 전) -> 함수 호출도 가능(함수 선언 필요 x)