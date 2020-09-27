//#include <stdio.h> // 입출력 관련 함수 헤더파일
//#include <string.h> // 문자열 관련 함수 헤더파일
//
//int main(void)
//{
//	char str1[80] = "cat";
//	char str2[80];
//
//	strcpy(str1, "tiger"); // str1배열에 "tiger" 복사
//	strcpy(str2, str1); // str2배열에 str1배열 문자열 복사
//	printf("%s, %s\n", str1, str2);
//
//	char str[80] = "applejam";  // 문자열 초기화(문자열 상수로 한 번에 초기화)
//	// \0문자는 문자열의 끝을 표시. 나머지 공간은 \0문자로 채워짐.
//	printf("최초 문자열 : %s\n", str);
//	printf("문자열 입력 : ");
//	scanf("%s", str); // 사용자가 입력한 문자열 다음에 자동으로 \0문자를 추가
//	printf("입력 후 문자열 : %s\n", str);
//
//	return 0;
//}
//// char형 배열 요소의 개수는 최소한 문자열 길이 + 1(\0문자).
//// char형 배열은 왼쪽에 주소값(상수)가 오기때문에 대입불가. 따라서 strcpy 사용.