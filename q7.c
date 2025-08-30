//Q7. Write a program to swap two numbers without using a third variable.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int a , b ;
    printf("Enter your number a and b\n");

    scanf ("%d %d" , &a , &b);

    a = a + b ;

    b = a - b ;

    a = a - b ; 

    printf("This is your numbers %d , %d  \n", a , b );

    return 0;
}