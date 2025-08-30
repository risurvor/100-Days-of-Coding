//#Q1: Write a program to input two numbers and display their sum.


#include <stdio.h>

int main()
{
    float num1, num2, sum;
    
    printf("Enter first number: \n");
    scanf("%f", &num1);
    
    printf("Enter second number: \n");
    scanf("%f", &num2);
    
    sum=num1 + num2;
    
    printf("Sum of %f and %f : %f", num1, num2, sum);
    return 0;
}
