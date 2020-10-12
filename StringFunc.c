//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[80] = "strawberry";
//	char str2[80] = "apple";
//	char* ps1 = "banana";
//	char* ps2 = str2;
//
//	printf("최초 문자열 : %s\n", str1);
//	strcpy(str1, str2); 
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, ps1);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, ps2);
//	printf("바뀐 문자열 : %s\n", str1);
//
//	strcpy(str1, "banana"); // 인수 1 :복사 받을 곳의 배열명. 2 : 복사할 문자열(시작 위치를 알 수 있는)
//							// 첫번째 인수에 상수 문자열은 X
//							
//	printf("바뀐 문자열 : %s\n", str1);
//
//	char str3[20] = "mango tree";
//	strncpy(str3, "apple-pie", 5); // 5개 문자만 복사
//
//	printf("%s\n", str3); // apple tree
//	
//	char str4[80] = "straw";
//
//	strcat(str4, "berry"); // 문자열 붙이기(널 문자 찾은후 그 위치부터 붙여넣고 마지막에 널 문자 저장)
//	printf("%s\n", str4);
//	strncat(str4, "piece", 3); // 3개만 붙이기
//	printf("%s\n", str4);
//
//	return 0;
//}
//
///* strcat 주의점 1 : 메모리 침범 할 수 있음
//				2 : 배열을 초기화(쓰레기값 때문) 
//					char str[80] = {'\0'};
//					char str[80] = {0};
//					char str[80] = "";
//					str[0] = '\0';				*/