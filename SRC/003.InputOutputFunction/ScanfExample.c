#include <stdio.h>

int main()
{
	char ch;//문자형
	
	short sh;//정수형
	int i;
	long lo;
	
	float fl;//실수형
	double du;
	
	printf("char형 변수 입력 : ");
	scanf("%c", &ch);
	
	printf("short형 변수 입력 : ");
	scanf("%hd", &sh);
	printf("int형 변수 입력 : ");
	scanf("%d", &i);
	printf("long형 변수 입력 : ");
	scanf("%ld", &lo);
	printf("float형 변수 입력 : ");
	scanf("%f", &fl);
	printf("double형 변수 입력 : ");
	scanf("%lf", &du);
	
	printf("char : %c, short : %d, int : %d\n",ch,sh,i);
	printf("long : %ld, float : %.1f, double : %.1f\n",lo,fl,du);
	
	return 0;
}