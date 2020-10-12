#include <stdio.h>

int main(void)
{
	register int i; // CPU안의 레지스터에 할당
	auto int sum = 0; // 지역 변수
	
	for (i = 1; i <= 10000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}

/* 1. 전역 변수는 레지스터 변수로 선언 할 수 없다.
   2. 레지스터 변수는 주소를 구할 수 없다.
   3. 레지스터의 사용 여부는 컴파일러가 결정한다.*/