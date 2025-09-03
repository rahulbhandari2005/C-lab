//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(void)
{
    int r=0; float area=0; float pi=3.14; float cr=0;
    printf("enter radius");
    scanf("%d",&r);
    area=pi*r*r;
    cr=2*pi*r;
    printf("Area = %f \n Circumference = %f ",area,cr);
    
}
