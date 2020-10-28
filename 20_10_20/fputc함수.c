//#include <stdio.h>
//
//int main(void)
//{
//	FILE* fp;
//	char str[] = "banana";
//	int i;
//
//	fp = fopen("b.txt", "w"); // 쓰기 전용으로 개방
//	if (fp == NULL)
//	{
//		printf("파일을 만들지 못했습니다.\n");
//		return 1;
//	}
//
//	i = 0;
//	while (str[i] != '\0') // 널 문자가 아니면
//	{
//		fputc(str[i], fp); // 문자를 파일에 출력
//		i++;
//	}
//	fputc('\n', fp);
//	fclose(fp);
//
//	return 0;
//}
