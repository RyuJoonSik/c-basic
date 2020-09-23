//#include <stdio.h>
//
////void fruit(void); //무한반복
//void fruit(int count);
//
//int main(void)
//{
//	//fruit();
//	fruit(1);
//
//	return 0;
//}
//
////void fruit(void) // 무한반복
////{
////	printf("apple\n");
////	fruit(); // 자기 자신 호출(재귀함수)
////}
//
//void fruit(int count)
//{
//	printf("apple\n");
//	if (count == 3) return;
//	fruit(count + 1);
//	printf("jam\n");
//}
//
//
///*무한 호출하면 프로그램 하나가 쓸 수 있는 
//메모리(해당 프로세스에 할당된 스택 메모리)를 모두 사용하여 강제 종료*/