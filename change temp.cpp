#include <stdio.h>

int main(void)
{
	float c=0;
	float f=0;
	printf("enter temperature in celsius");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("temperature in fahrenheit is %f",f);
	
}
