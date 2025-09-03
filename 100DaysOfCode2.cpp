//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(void)
{
  int a=0; int b=0;
   int sum=0; int diff=0; int pd=0; int qs=0;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   sum=a+b;
   diff=a-b;
   pd=a*b;
   qs=a/b;
   printf("sum =  %d \n difference = %d \n product = %d \n quotient = %d",sum,diff,pd,qs);

}
