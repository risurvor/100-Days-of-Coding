//Q4: Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>

int main()
{
    float radius=5;
    float circumference=2 * 3.14 * radius;
    float area= 3.14 * radius * radius;
    printf("The circumference of the circle is %f \n", circumference);
    printf("The area of the cricle is %f", area);
    return 0;
}