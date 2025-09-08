#include <stdio.h>

int main()
{
	int a=0;
	printf("enter percentage");
	scanf("%d",&a);
	
	if(a>=90&&a<=90)
	{
		printf("grade A");
		
		
	}
	
	else if(a>=80&&a<90)
	{
		scanf("grade B");
	}
	else if(a>=70&&a<80)
	{
		printf(" grade C");
	}
	else if(a>=60&&a<70)
	{
		printf(" grade d");
		
	}
	else
	{
		printf(" grade F");
		
	}
	return 0;
}
