//#include <stdio.h>
//
//struct vision
//{
//	double left;
//	double right;
//};
//
//struct vision exchange(struct vision robot); 
//
//int main(void)
//{
//	struct vision robot;
//
//	printf("시력 입력 : ");
//	scanf("%lf%lf", &(robot.left), &(robot.right)); // 접근 연산자 우선순위가 더 높다.
//	robot = exchange(robot); // 교환 함수 호출
//	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);
//
//	return 0;
//}
//
//struct vision exchange(struct vision robot) // 구조체 반환 함수
//{
//	double temp;
//
//	temp = robot.left;
//	robot.left = robot.right;
//	robot.right = temp;
//
//	return robot; // 구조체 변수 반환
//}