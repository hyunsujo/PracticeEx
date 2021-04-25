#include <stdio.h>

int main()
{
	float a = 3.141592f;
	double b = 3.141592;
	
	printf("float a는 %f입니다. \n", a);
	printf("double b는 %f입니다. \n ",b);
	
	printf("float a는 %d입니다. \n ", a);// 실수형으로 선언 후 정수형으로 출력할 시  error 발생
	
	return 0; //return 사용 안할시 main 함수 선언시 void main() 으로 한다.		
}