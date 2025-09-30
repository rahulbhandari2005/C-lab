//Write a program to print all factors of a given number.
#include <stdio.h>
int main()
{
	
	int a,b,c,d,n;
	printf("enter a number");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf(" %d ",i);
		}
		
		
	}
	
	return 0;
	
}
