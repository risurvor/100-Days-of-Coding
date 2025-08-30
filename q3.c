//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{
    int length=5;
    int breadth=20;
    printf("The perimeter of the rectangle is %d \n", 2*(length + breadth));
    printf("The area of the rectangle is %d", length*breadth);
    return 0;
}