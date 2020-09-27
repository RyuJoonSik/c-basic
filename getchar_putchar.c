#include <stdio.h>

int main(void)
{
	int ch;

	ch = getchar(); // 반환 문자 바로 저장(아스키 코드 값으로 반환하기 때문에 int)
	printf("입력한 문자 : ");
	putchar(ch); // 출력 과정에서 에러가 발생하면 -1 반환
	putchar('\n');
	// 문자 전용 입출력 함수 getchar, putchar
	// 아스키 코드값에 해당하는 문자를 입/출력.

	return 0;
}