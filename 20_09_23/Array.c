//#include <stdio.h>
//
//int main(void)
//{
//	int ary[5]; // 자료형 + 배열명 + 요소개수
//
//	ary[0] = 10; // 첫 번째 배열요소에 값 대입. 배열명[첨자(index)]
//	ary[1] = 20;
//	ary[2] = ary[0] + ary[1];
//	scanf("%d", &ary[3]);
//
//	printf("%d\n", ary[2]);
//	printf("%d\n", ary[3]);
//	printf("%d\n", ary[4]); // 쓰레기 값이 들어가 있다.
//
//	// 배열의 초기화
//	int ary1[5] = { 1, 2, 3, 4, 5 }; // 첫 번째 요소부터 차례로 초기화
//	int ary2[5] = { 1, 2, 3 }; // 왼쪽부터 차례로 초기화, 나머지는 0으로 채움
//	int ary3[1000] = { 0 }; // 모든 요소 0으로 초기화
//	int ary4[] = { 1, 2, 3 }; // 배열 요소 개수 생략 가능(초깃값 개수만큼 요소 개수 결정)
//	double ary5[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 }; // double형 배열
//	char ary6[5] = { 'a', 'p', 'p', 'l', 'e' }; // char형 배열
//
//	// 반복문 사영
//	int score[5]; 
//	int i;
//	int total = 0;
//	double avg;
//	int count;
//
//	count = sizeof(score) / sizeof(score[0]);
//
//	for (i = 0; i < count; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	for (i = 0; i < count; i++)
//	{
//		total += score[i];
//	}
//	avg = total / (double)count;
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", score[i]);
//	}
//
//	printf("\n");
//
//	printf("평균 : %.1lf\n", avg);
//
//	return 0;
//}
//
///* 배열은 메모리에 연속된 공간이 할당되며 하나의 이름을 사용.
//	배열의 초기화는 선언 시 최초 한 번만 가능. 
//	배열 요소의 개수 = sizeof(배열명) / sizeof(배열 요소)
//   */