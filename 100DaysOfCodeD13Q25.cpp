//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main()

{
	
	int a,b,c; char d;
	printf("enter first no .");
    scanf("%d",&a);
    	printf("enter opteration from +,-,*,/,% \n");
    	scanf(" %c",&d);
    		printf("enter second  no .");
    		scanf("%d",&b);
    		
    		switch(d)
    		{
    			case '+': c=a+b;
				printf(" answer : %d ",c); 
				break;
				
				case '-': c=a-b;
				printf(" answer : %d ",c); 
				break;
				
				case '*': c=a*b;
				printf(" answer : %d ",c); 
				break;
				
				case '/': c=a/b;
				printf(" answer : %d ",c); 
				break;
				
				case '%': c=a%b;
				printf(" answer : %d ",c); 
				break;
				
				default: printf(" invalid data ");
				 
			}
			
			return 0;

}
