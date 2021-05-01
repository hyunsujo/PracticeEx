#include <stdio.h>

int main()
{
	int i, j;
	
	printf("크기를 비교할 2개의 수중 첫번째 수를 입력해 주세요 : ");
	scanf("%d",&i);
	printf("크기를 비교할 2개의 수중 두번째 수를 입력해 주세요 : ");
	scanf("%d",&j);
	
	if(i>j)
	{
		printf("%d는 %d 보다 큽니다 \n", i ,j);
	}
	if(i<j)
	{
		printf("%d는 %d 보다 작습니다 \n", i ,j);
	}
	if(i>=j)
	{
		printf("%d는 %d 보다 크거나 같습니다 \n", i ,j);
	}
	if(i<=j)
	{
		printf("%d는 %d 보다 작거나 같습니다 \n", i ,j);
	}
	if(i==j)
	{
		printf("%d는 %d 와(과) 같습니다 \n", i ,j);
	}
	if(i!=j)
	{
		printf("%d는 %d 와(과) 다릅니다 \n", i ,j);
	}
	
	return 0;
}