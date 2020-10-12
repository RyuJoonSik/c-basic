#include <stdio.h>

int main(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str); // apple juice 출력 후 줄 바꿈
	fputs(ps, stdout);; // banana만 출력. 줄 바꿈(X)
	puts("milk");

	return 0;
}

// 인수로 배열명, 포인터, 문자열 상수를 줄 수 있다.