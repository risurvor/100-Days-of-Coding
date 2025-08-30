//Q8. Write a program to find and display the sum of the first n natural numbers


#include <stdio.h>
    
    int main()
    {
    int a, sum = 0 ;
        
    printf("Enter your number\n");
    scanf ("%d", &a);
        
    for (int i = 0 ; i <= a ;  i++ ) {

        sum = sum + i; }
        
        printf("%d\n", sum );

    
    
    

        return 0;
    }