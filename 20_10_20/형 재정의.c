//#include <stdio.h>
//
//struct student
//{
//	int num;
//	double grade;
//};
//
//typedef struct
//{
//	int num;
//	double grade;
//}Student;
//// 선언과 동시에 재정의
//
//typedef struct student Student; // Student형으로 재정의
//void print_data(Student* ps); // Student형 포인터
//
//int main(void)
//{
//	Student s1 = { 315, 4.2 };
//
//	print_data(&s1);
//
//	return 0;
//}
//
//void print_data(Student* ps)
//{
//	printf("학번 : %d\n", ps->num);
//	printf("학점 : %.1lf\n", (*ps).grade);
//}