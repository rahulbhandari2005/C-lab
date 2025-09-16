//Write a program to print numbers from 1 to n
#include <stdio.h>

int main()

{
	
	int n,a; int i=1;
	printf("enter nth number ");
	scanf("%d",&n);
	 while(i<=n)
	 {
	 	a=a+i;
	 	i++;
	 }
	 
	 printf("sum of n number is : %d",a);
	 return 0;
}
