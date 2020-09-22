//#include <stdio.h>
//
//int main(void)
//{
//	int rank = 2, m = 0;
//
//	switch (rank) // 정수 조건만 가능
//	{
//	case 1: // 정수만 가능
//		m = 300;
//		break; // 조건 참일 경우 switch문 빠져 나올 때 사용.
//	case 2:
//		m = 200;
//		break;
//	case 3:
//		m = 100;
//		break;
//	default : // 일치 하는 값 없을 경우(case상수 모두 비교후에 default로 이동. 떄문에 위치 상관x)
//		m = 10;
//		break;
//	}
//
//	printf("m : %d\n", m);
//
//	return 0;
//}