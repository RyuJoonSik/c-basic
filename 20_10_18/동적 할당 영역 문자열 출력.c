#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps); // 동적 할당 영역의 문자열을 출력하는 함수

int main(void)
{
	char temp[80];
	char* str[21] = { 0 };
	int i = 0;

	while (i < 20)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);
		if (strcmp(temp, "end") == 0) break;
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}

	print_str(str);

	for (i = 0; str[i] != NULL; i++) // str에 연결된 문자열이 없을 때까지
	{
		free(str[i]);
	}
	
	return 0;
}

void print_str(char** ps)
{
	while (*ps != NULL) // 포인터 배열의 값이 널 포인터가 아닌 동안
	{
		printf("%s\n", *ps); // ps가 가리키는 것은 포인터 배열의 요소
		ps++;
	}
}