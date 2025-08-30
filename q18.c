//Q18.Write a program to assign grades based on a percentage input.


#include <stdio.h> 
int main()
{
    float  M; 

    printf("Enter your marks\n");
    scanf("%f" , &M);

    if ( 100 >= M && M > 90 )
    {
        printf ("Grade A" ); 
    } 

     else if (90 >= M  && M  > 80 )
     {printf ("Grade B" );} 
  
     else if (80 >= M  && M  > 70 )
     {printf ("Grade C" );} 

     else if (70 >= M  && M  > 60 )
     {printf ("Grade D" );} 

     else if (60 >= M  && M  > 50 )
     {printf ("Grade E" );} 

     else if (50 >= M  && M  > 40 )
     {printf ("Grade F" );} 

     else 
     {printf ("Kick" );} 


     
    
    return 0;
}