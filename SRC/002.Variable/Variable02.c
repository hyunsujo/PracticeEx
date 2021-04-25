#include <stdio.h>

int main()
{
	int a= 127;
	
	//printf("%d의 %d진수 표현은 : %o 입니다.\n",a, 8,a);
	//printf("%d의 %d진수 표현은 : %d 입니다.\n",a, 10,a);
	//printf("%d의 %d진수 표현은 : %x 입니다.\n",a, 16,a);
	
	
	printf("%d의 값은 %o은 %d진수 입니다.\n",a, a,8);
	printf("%d의 값은 %d은 %d진수 입니다.\n",a, a,10);
	printf("%d의 값은 %x은 %d진수 입니다.\n",a, a,16);
	
	return 0;
}