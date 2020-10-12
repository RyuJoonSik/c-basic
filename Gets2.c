//#include <stdio.h>
//
//int main(void)
//{
//	void my_gets(char* ps);
//
//	int i = 0;
//	char str[20];
//	char ch;
//
//	my_gets(str);
//
//	//printf("%s", str);
//	//do
//	//{
//	//	ch = getchar(); // 문자 한 개 입력
//	//	str[i] = ch;
//	//	i++;
//	//} while (ch != '\n'); // 입력값이 개행 문자면 종료
//
//	//str[i-1] = '\0'; // 개행 문자가 입력된 위치에 널 문자 저장
//	//printf("%s", str);
//
//	return 0;
//}
//
//// 함수로 구현
//void my_gets(char* ps)
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n') // 입력받는 문자가 개행이 아닌동안
//	{
//		*ps = ch;
//		ps++;
//	}
//	*ps = '\0';
//
//	ps = ch;
//	printf("%s", ps);
//}