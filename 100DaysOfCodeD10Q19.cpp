//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths
#include <stdio.h>

int main(void)
{
	int a,b,c;
	
	printf("enter three sides of a triangle");
	
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b && b==c && c==a)
	{
	printf("equilateral triangle");
	
	}
	else if(a==b||c==a||b==c)
	{
		printf("isosceles");
		
	}
	else if((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(b*b)+(a*a))
	{
		printf("rightangled triangle");
	}
	else
	{
		printf(" scalene");
		
	}
}
