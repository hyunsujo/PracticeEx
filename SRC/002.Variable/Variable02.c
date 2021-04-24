#include <stdio.h>

int main()
{
	int a= 127;
	
	printf("%d의 값은 %d 진수표현은 %o 입니다.\n",a, 8,a);
	printf("%d의 값은 %d 진수표현은 %d 입니다.\n",a, 10,a);
	printf("%d의 값은 %d 진수표현은 %x 입니다.\n",a, 16,a);
	
	return 0;
}