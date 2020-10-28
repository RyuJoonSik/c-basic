//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	FILE* ifp, * ofp;
//	char str[5];
//	char* res;
//
//	ifp = fopen("a.txt", "r");
//	if (ifp == NULL)
//	{
//		printf("입력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp == NULL)
//	{
//		printf("출력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//	
//	while (1)
//	{
//		res = fgets(str, sizeof(str), ifp);
//		if (res == NULL) // 다음 읽을 데이터가 없을 경우
//		{
//			break;
//		}
//		str[strlen(str) - 1] = '\0';  // 개행 문자 제거
//		fputs(str, ofp); // 자동 줄바꿈 x
//		fputs(" ", ofp);
//	}
//	
//	fclose(ifp);
//	fclose(ofp);
//
//	return 0;
//}