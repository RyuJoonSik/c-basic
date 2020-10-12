//#include <stdio.h>
//
//char* my_strcpy(char* pd, char* ps);
//
//int main(void)
//{
//	char str[80] = "strawberry";
//
//	printf("바꾸기 전 문자열 : %s\n", str);
//	my_strcpy(str, "apple");
//	printf("바꾼 후 문자열 : %s\n", str);
//	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));
//
//	return 0;
//}
//
//char* my_strcpy(char* pd, char* ps)
//{
//	char* po = pd; // 함수 호출 문장을 출력문에 사용하여 복사 받은 문자열을 바로 확인 할 수 있다.
//
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//
//	*pd = '\0';
//
//	return po;
//}
//
//char* my_strcat(char* pd, char* ps)
//{
//	char* po = pd; // 배열의 처음 위치
//
//	while (*pd != '\0')
//	{
//		pd++;
//	}
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//
//	*pd = '\0';
//	return po;
//}
//
//int my_strlen(char* ps)
//{
//	int cnt = 0;
//	while (*ps != '\0')
//	{
//		cnt++;
//		ps++;
//	}
//	return cnt;
//}
//
//int my_strcmp(char* pa, char* pb)
//{
//	while ((*pa == *pb) && (*pa != '\0'))
//	{
//		pa++;
//		pb++;
//	}
//
//	if (*pa > * pb) return 1; // 아스키 코드값이 크면 1반환
//	else if (*pa < *pb) return -1; // 아스키 코드 값이 작으면 -1반환
//	else return 0; // 둘 다 같으면 0 
//}