//Write a program to reverse a given number.
#include <stdio.h>
int main()

{
	 int n, reversed_number = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int original_number = n;

    while (n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    printf("The reverse of %d is %d\n", original_number, reversed_number);

    return 0;
}

