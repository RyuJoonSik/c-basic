//#include <stdio.h>
//
//int main(void)
//{
//	int age;
//	char name[20];
//
//	printf("나이 입력 : ");
//	scanf("%d", &age);
//
//	/* 개행 문자 지우기 
//		1. getchar() : 버퍼에서 하나의 문자를 읽어서 반환, 반환 문자는 버림
//		2. scanf("%*c") : 버퍼에서 하나의 문자를 읽어서 버림, 변수는 필요 없음
//		3. fgetc(stdin) : 버퍼에서 하나의 문자를 읽어서 반환, 반환 문자는 버림
//		*/
//
//	printf("이름 입력 : ");
//	gets(name); // 나이 입력 후 남아있는 개행 문자가 get 함수의 입력으로 쓰인다.
//
//	printf("나이 : %d, 이름 : %s\n", age, name);
//
//	return 0;
//}