//#include <stdio.h>
//
//int main(void)
//{
//	char animal[5][20];
//	int i;
//	int count;
//
//	count = sizeof(animal) / sizeof(animal[0]);
//	for (i = 0; i < count; i++)
//	{
//		scanf("%s", animal[i]);
//	}
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%s ", animal[i]);
//	}
//
//	char animal1[5][10] = {
//		{'d', 'o', 'g', '\0'},
//		{'t', 'i', 'g', 'e', 'r', '\0'},
//		{'r', 'a', 'b', 'b', 'i', 't', '\0'},
//		{'h', 'o', 'r', 's', 'e', '\0'},
//		{'c', 'a', 't', '\0'}
//	};
//
//	char animal2[][10] = { "dog", "tiger", "rabbit", "horse", "cat" };
//	// 문자열 상수로 초기화, 행의 수 생략 가능
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s ", animal1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s ", animal2[i]);
//	}
//
//	return 0;
//}