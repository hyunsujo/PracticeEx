#include <stdio.h>

int main()
{
	int i,j,k,l;
	
	printf("별의 갯수를 입력하시오 : ");
	scanf("%d", &l);
	
	for(i=0;i<5;i++)
	{
		for(k=0;k<4-i;k++)
		{
			printf(" ");
		}
		
		for(j=0;j<=2*i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}