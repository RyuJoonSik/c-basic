//#include <stdio.h>
//
//int main(void)
//{
//	FILE* fp;
//	int ch;
//
//	fp = fopen("a.txt", "r");
//	if (fp == NULL)
//	{
//		printf("파일이 열리지 않았습니다.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		ch = fgetc(fp); // 개방한 파일에서 한 문자 입력. 위치 지시자 자동 증가
//		if (ch == EOF) // 함수의 반환값이 EOF(=-1) 이면 입력 종료
//		{
//			break;
//		}
//		putchar(ch); // 화면에 출력
//	}
//	fclose(fp);
//
//	return 0;
//}