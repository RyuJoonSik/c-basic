//#include <stdio.h>
//
//int main(void)
//{
//	int a = 20, b = 3;
//	double res;
//
//	res = ((double)a) / ((double)b); // 일시적으로 값을 실수형으로 변환
//	printf("a = %d, b = %d\n", a, b);
//	printf("a / b 의 결과 : %.1lf\n", res);
//
//	a = (int)res; // 정수부분만 대입
//	printf("(int) %.1lf의 결과 : %d\n", res, a);
//
//	return 0;
//}

/*int형과 double형을 명확히 구분하여 사용하는 것이 좋다.
자동 형 변환(암시적) : 2개 이상의 피연산자의 형태가 다르면 일치시키는 작업.
크기 작은 값 -> 큰 값. 예상치 못한 값 주의(통일시켜 사용하는 것이 좋다.)*/