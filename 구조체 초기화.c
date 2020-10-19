//#include <stdio.h>
//
//struct student
//{
//	int id;
//	char name[20];
//	double grade;
//};
//
//int main(void)
//{
//	struct student s1 = { 315, "홍길동", 2.4 }, // 초기화는 중괄호 사용.
//		s2 = { 316, "이순신", 3.7 },
//		s3 = { 317, "세종대왕", 4.4 };
//
//	//struct student 
//	//{
//	//	int id;
//	//	char name[20];
//	//	double grade;
//	//} s1 = { 315, "홍길동", 2.4 };
//	//형선언, 변수선언, 초기화를 한 번에도 가능하다. 전역으로 선언 시 0으로 자동 초기화.
//
//	struct student max; // 최고 학점을 저장할 구조체 변수.
//
//	max = s1;
//	if (s2.grade > max.grade) max = s2;
//	if (s3.grade > max.grade) max = s3;
//
//	printf("학번 : %d\n", max.id);
//	printf("이름 : %s\n", max.name);
//	printf("학점 : %.1lf\n", max.grade);
//
//	return 0;
//}