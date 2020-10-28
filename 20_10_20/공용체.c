//#include <stdio.h>
//
//union student // 공용체 선언
//{
//	int num;
//	double grade;
//};
//
//int main(void)
//{
//	union student s1 = { 315 }; // 첫 번째 멤버 초기화
//	union student s2 = { .grade = 4.4 };  // 두 번째 멤버 초기화
//	
//	printf("학번 : %d\n", s1.num);
//	s1.grade = 4.4;
//	printf("학점 : %.1lf\n", s1.grade);
//	printf("학번 : %d\n", s1.num);
//
//	return 0;
//}