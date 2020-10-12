//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str[80];
//	
//	printf("공백이 포함된 문자열 입력 : ");
//	fgets(str, sizeof(str), stdin); // 1. 배열명 2. 배열 크기 3. 표준 입력(키보드)
//	str[strlen(str) - 1] = '\0';
//
//	printf("입력된 문자열은 %s입니다.", str);
//
//	// 개행 문자까지 배열에 저장하고 마지막에 널 문자를 붙인다.
//	// str[strlen(str) - 1] = '\0' : 개행 문자 제거
//	return 0;
//}