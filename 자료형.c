#include <stdio.h>

int main(void)
{
	char ch1 = 'A'; // 아스키 값
	char ch2 = 65; // 'A'에 해당하는 정수 값

	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
	printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);

	short sh = 3267; // short 최댓값
	int in = 2147483647; // int 최댓값
	long ln = 2147483647; // long 최댓값
	long long lln = 123451234512345; // 큰 값

	printf("short 변수 : %d\n", sh);
	printf("int 변수 : %d\n", in);
	printf("long 변수 : %ld\n", ln);
	printf("long long 변수 : %lld\n", lln);
	
	return 0;
}