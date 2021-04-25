#include <stdio.h>

int main()
{
	int a,b;
	//double b;
	a=10;
	b=3;
	
	printf("a+b 는 %d \n", a+b);
	printf("a-b 는 %d \n", a-b);
	printf("a*b 는 %d \n", a*b);
	printf("a/b 는 %d \n", a/b);
	//printf("a%%b 는 %d \n", a%b);
	
	//printf("a/b 는 %f \n", a/b); 정수형 연산 정수형 일 경우 결과는 정수형이어야 함. 
	/*printf("a/b 는 %f \n", a/b);
	printf("b/a 는 %f \n", b/a); 두변수중 자료형이 큰것으로 결과가 변환됨*/ 
	
	return 0;
}