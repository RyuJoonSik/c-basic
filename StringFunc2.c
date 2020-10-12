#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2)) // 실제 저장된 문자열의 길이를 반환(널 문자x)
	{
		resp = str1;
	}
	else
	{
		resp = str2;
	}

	printf("이름이 긴 과일은 : %s\n", resp);

	return 0;
}