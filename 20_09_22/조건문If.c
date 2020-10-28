//#include <stdio.h>
//
//int main(void)
//{
//	int a = 0, b = 0;
//
//	if (a > 0)
//	{
//		b = 1;
//	}
//	else if (a == 0)
//	{
//		b = 2;
//	}
//	else
//	{
//		b = 3;
//	}
//
//	printf("b : %d\n", b);
//
//	a = 5;
//	if (a <= 3) // if문 중첩(분할 정복 기법) 
//	{
//		if (a == 1)
//		{
//			printf("one");
//		}
//		else if (a == 2)
//		{
//			printf("Two");
//		}
//		else
//		{
//			printf("Three");
//		}
//	}
//	else
//	{
//		if (a == 4)
//		{
//			printf("Four");
//		}
//		else if (a == 5)
//		{
//			printf("Five");
//		}
//		else
//		{
//			printf("Six");
//		}
//	}
//	printf("\n");
//	a = 10, b = 20;
//
//	if (a < 0) /* !반드시 중괄호를 붙여준다(else는 가장 까가운 if와 연결)*/
////	{ 중괄호 생략시 58행 63행이 하나의 조건으로 된다. 그리고 a<0은 거짓이므로 아무것도 실행X
//		if (b > 0)
//		{
//			printf("OK");
//		}
////	}
//	else
//	{
//		printf("OK");
//	}
//	printf("\n");
//	return 0;
//}
//
///* 2개의 실행문 중에 하나를 선택하는 경우 : if ~else
//	if ~else if ~else 사용 시 불필요한 조건 검사를 더 많이 할 수 있으므로 조건식의
//	순서를 논리적 흐름에 맞게 작성하여 중복 검사를 피한다.(참이 될 가능성 높은 식 먼저 사요)*/