//#include <stdio.h>
//
//int main(void)
//{
//	int a, b;
//	int sum, sub, mul, inv;
//
//	a = 10;
//	b = 20;
//	sum = a + b;
//	sub = a - b;
//	mul = a * b;
//	inv = -a;
//
//	printf("a의 값 : %d, b의 값 : %d\n", a, b);
//	printf("덧셈 : %d\n", sum);
//	printf("뺄셈 : %d\n", sub);
//	printf("곱셈 : %d\n", mul);
//	printf("a의 음수 연산 : %d\n", inv);
//
//	double apple;
//	int banana;
//	int orange;
//
//	apple = 5.0 / 2.0; // 실수 연산
//	banana = 5 / 2; 
//	orange = 5 % 2; // 피연산자 실수 사용 시 에러 발생
//
//	printf("apple : %.1lf\n", apple);
//	printf("banana : %d\n", banana);
//	printf("orange : %d\n", orange);
//
//	int c = 10, d = 10;
//	// 증감연산자에 상수는 사용 불가
//	++c;
//	--d;
//
//	printf("c : %d\n", c);
//	printf("d : %d\n", d);
//
//	int e = 5, f = 5;
//	int pre, post;
//	printf("초깃값 e = %d, f = %d\n", e, f);
//
//	pre = (++e) * 3; // 전위
//	post = (f++) * 3; // 후위
//
//	
//	printf("전위형 : (++e) * 3 = %d, (f++) * 3 = %d\n", pre, post);
//
//	printf("계산 후 e = %d, f = %d\n", e, f);
//
//	int g = 10, h = 20, i = 10;
//	int res; // 결괏값 저장
//	printf("g : %d, h : %d, i : %d\n", g, h, i);
//
//	res = (g > h); 
//	printf("g > h : %d\n", res);
//
//	res = (g >= h);
//	printf("g >= h : %d\n", res);
//
//	res = (g < h);
//	printf("g < h : %d\n", res);
//
//	res = (g <= h);
//	printf("g <= h : %d\n", res);
//
//	res = (g <= i);
//	printf("g <= i : %d\n", res);
//
//	res = (g == h);
//	printf("g == h : %d\n", res);
//
//	res = (g != i);
//	printf("g != i : %d\n", res);
//
//	return 0;
//}

/* 하나의 수식에서 같은 변수를 두 번 이상 사용할 떄는 그 변수에
증감 연산자를 사용하면 안된다.*/