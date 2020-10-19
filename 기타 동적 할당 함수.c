//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void)
//{
//	int* pi;
//	int size = 5;
//	int count = 0;
//	int num;
//	int i;
//
//	pi = (int*)calloc(size, sizeof(int)); // 5개의 저장 공간 할당
//	while (1)
//	{
//		printf("양수만 입력하세요 =>");
//		scanf("%d", &num);
//		if (num <= 0) break;
//		if (count == size)
//		{
//			size += 5;
//			pi = (int*)realloc(pi, size * sizeof(int));
//			// 재할당 과정에서 메모리의 위치가 바뀔 수 있으므로 항상 realloc
//			// 함수가 반환하는 주소를 다시 포인터에 저장해 사용하는 것이 좋다.
//		}
//		pi[count++] = num;
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%5d", pi[i]);
//	}
//	free(pi);
//
//	return 0;
//}