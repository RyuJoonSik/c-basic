//#include <stdio.h>
////#pragma pack(1) // 패딩 바이트 x
//
//struct student // 구조체 선언. 컴파일러에 미리 알려야한다. struct : 예약어.
//{
//	char ch1;
//	short num; // 구조체 멤버
//	char ch2;
//	int score;
//	//double grade; // 구조체 멤버
//	//char ch3;
//};
//
//
//int main(void)
//{
//	struct student s1; // struct student형 변수 선언. 이때부터 저장 공간 할당.
//
//	//s1.num = 2; // s1의 num 멤버에 2 저장. .(점) : 접근 연산자.
//	//s1.grade = 2.7; // s1의 grade 멤버에 2.7 저장
//	//printf("학번 : %d\n", s1.num);
//	//printf("학점 : %.1lf\n", s1.grade);
//	printf("%d", sizeof(s1)); // 패딩 바이트 때문에 크기는 16(바이트 얼라인먼트)
//	return 0;
//}