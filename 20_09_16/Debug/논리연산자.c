//#include <stdio.h>
//
//int main(void)
//{
//	int a = 30;
//	int res;
//
//	res = (a > 10) && (a < 20);
//	printf("(a > 10) && (a < 20) : %d\n", res);
//	res = (a < 10) || (a > 20);
//	printf("(a < 10) || (a > 20) : %d\n", res);
//	res = !(a >= 30);
//	printf("!(a >= 30) : %d\n", res);
//
//	return 0;
//}
/* 관계연산자만 사용하지 않도록 주의. 
&& : 좌항이 거짓이면 결과는 다 거짓
|| : 좌항이 참이면 결과는 참 
숏 서킷룰 : 좌항의 결과에 따라 우항이 실행되지 않을 수도 있다. */