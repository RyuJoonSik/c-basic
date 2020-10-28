//#include <stdio.h>
//
//int main(void)
//{
//	char grade;
//	char name[20];
//
//	printf("학점 입력 : ");
//	scanf("%c", &grade);
//	printf("이름 입력 : ");
//	scanf("%s", name); // 배열에는 &사용 X
//	printf("%s의 학점은 %c입니다.", name, grade);
//
//	return 0;
//}

/* \0문자는 scanf가 자동으로 붙여준다. 한글 = 2바이트, 영어 = 1바이트.*/