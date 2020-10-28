//#include <stdio.h>
//
//int main(void)
//{
//	FILE* fp;
//	int ary[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
//	int i, res;
//
//	fp = fopen("a.txt", "wt");
//	for (i = 0; i < 10; i++)
//	{
//		fputc(ary[i], fp);	
//		// 아스키 문자를 바이너리 파일로 저장한다.
//		// '\r''\n''\r''\r''\n'^z'\r''\n''\r''\n'
//	}
//	fclose(fp);
//
//	fp = fopen("a.txt", "rt");
//	while (1)
//	{
//		res = fgetc(fp);
//		if (res == EOF) break;
//		printf("%4d", res);
//		// '\r''\n''\r''\r''\n' ^ z'\r''\n''\r''\n'
//		// \r\n(개행) \r은 버리고 \n(13)만 입력. 
//		// ^z(Ctrl+z)는 파일의 끝(EOF)로 인식.
//		// 텍스트 파일에 출력하는 함수는 리턴 문자를 포함한 개행 문자를 파일에 출력.
//	}
//	fclose(fp);
//
//	return 0;
//}