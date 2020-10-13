//#include <stdio.h>
//
//int main(void)
//{
//	int score[2][3][4] = {
//		{{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}},
//		{{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
//	}; // 2개 반 세명의 4과목 점수 저장
//
//	int i, j, k;
//
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d반 점수...\n", i + 1);
//		for (j = 0; j < 3; j++)
//		{
//			for (k = 0; k < 4; k++)
//			{
//				printf("%5d", score[i][j][k]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

/* 면 부분배열 : score[0], scpre[1]
   행 부분배열 : score[0][0], score[0][1], score[0][2], 
			   score[1][0], score[1][1], score[1][2] */