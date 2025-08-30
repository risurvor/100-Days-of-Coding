//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    float num1, num2, sum, difference, product, quotient;
    
    printf("Enter first number: \n");
    scanf("%f", &num1);
    
    printf("Enter second number: \n");
    scanf("%f", &num2);
    
    sum=num1 + num2;
    
    printf("Sum of %f and %f : %f \n", num1, num2, sum);
    
    difference=num1 - num2;
    
    printf("Difference of %f and %f : %f \n", num1, num2, difference);
    
    product=num1 * num2;
    
    printf("Product of %f and %f : %f \n", num1, num2, product);
    
    quotient=num1 / num2;
    
    printf("Quotient of %f and %f : %f", num1, num2,quotient);
    
    return 0;
}