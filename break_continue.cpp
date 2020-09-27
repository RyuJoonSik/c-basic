//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	int sum = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		sum += i;
//		if (sum > 30) break; 
//	}
//	printf("누적한 값 : %d\n", sum);
//	printf("마지막으로 더한 값 : %d\n", i);
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 3) == 0)
//		{
//			continue; // 3의 배수이면 문장 건너뛰고 반복문 블록 끝으로 간 후에 다시 반복
//		}
//		sum += i;
//	}
//	printf("continue 결과 : %d\n", sum);
//
//	i = 1;
//	while (i <= 100) // 증감식을 건너뛰어서 조건식이 계속 참이게 된다.
//	{
//		if ((i % 3) == 0)
//		{
//			continue;
//		}
//		sum += i;
//		i++;
//	}
//
//	return 0;
//}
//
//// break : 조건 참일 경우 반복문 탈출. 자신이 속한 반복문 하나만 벗어난다. (switch ~ case 벗어 날 때도 사용)