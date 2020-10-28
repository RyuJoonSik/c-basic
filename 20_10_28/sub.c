#include <stdio.h>

extern int count;
int total = 0;

void input_data(void)
{
	int pos;

	while (1)
	{
		printf("양수 입력 : ");
		scanf("%d", &pos);
		if (pos < 0) break;
		count++;
		total += pos;
	}

	return total;
}

double average(int a, int b)
{
	int tot;
	double avg;

	tot = a + b;
	avg = tot / 2.0;

	return avg;
}

