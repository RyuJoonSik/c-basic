//#include <stdio.h>
//
//struct score
//{
//	int kor;
//	int eng;
//	int math;
//};
//
//int main(void)
//{
//	struct score yuni = { 90, 80, 70 };
//	struct score* ps = &yuni; // 구조체 포인터에 주소 저장
//
//	printf("국어 : %d\n", (*ps).kor); // 구조체 포인터로 멤버 접근
//	// .(점)이 *보다 연산순위가 높아 ()로 감싸주어야 한다
//	printf("영어 : %d\n", ps->eng); // -> 연산자 사용
//	printf("수학 : %d\n", ps->math);
//
//	return 0;
//}