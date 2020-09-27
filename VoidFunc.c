//#include <stdio.h>
//
//int get_num(void); // 매개변수 X
//void print_char(char ch, int count); // 반환형 X
//void print_line(void); // 매개변수, 반환형 X
//
//int main(void)
//{
//	int result;
//
//	result = get_num(); // void는 정의나 선언에서 명시
//	printf("반환값 : %d\n", result);
//
//	print_char('@', 5);
//
//	print_line();
//	printf("학번\t이름\t전공\t학점\n");
//	print_line();
//
//	return 0;
//}
//
//int get_num(void) // 매개변수 X
//{
//	int num;
//
//	printf("양수 입력 : ");
//	scanf("%d", &num);
//
//	return num;
//}
//
//void print_char(char ch, int count) // 반환형 X
//{
//	int i;
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", ch);
//	}
//	printf("\n");
//
//	return; // 생략 가능. 함수 실행 중간에 돌아가야 할 경우 어디서든 사용 가능.
//}
//
//void print_line(void)
//{
//	int i;
//
//	for (i = 0; i < 50; i++)
//	{
//		printf("-");
//	}
//	printf("\n");
//}