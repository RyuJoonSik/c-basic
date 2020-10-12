//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//	char str1[80] = "pear";
//	char str2[80] = "peach";
//
//	printf("사전에 나중에 나오는 과일 이름 : ");
//	
//	if (strcmp(str1, str2) > 0) // str1이 str2보다 나중에 오면 1 아니면 -1
//		printf("%s\n", str1);
//	else
//		printf("%s\n", str2);
//
//	if (strncmp(str1, str2, 3) == 0) // 앞 3개의 문자끼리만 비교. 같으면 0반환
//		printf("같다.\n");
//	else
//		printf("다르다.\n");
//
//	return 0;
//}
//
//// strcmp 함수 : 각각의 대칭되는 자리의 아스키 값을 비교.대소문자 주의!