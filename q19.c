//Q19. Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    
    printf("Enter sides of triangle a,b,c=");
    if (scanf("%lf %lf %lf", &a, &b, &c) !=3) return 0;
    
    if(a + b <= c || a + c <= b || b + c <= a ) {
        printf("Triangle cannot be formed.\n");
        return 0;
    }
    
    if(a == b && b == c) {
        printf("Equilateral triangle\n");
        return 0;
    }
    
    double a2 = a*a, b2 = b*b, c2 = c*c;
    int rt = (a2 + b2 ==c2) ||  (b2 + c2 == a2) || (a2 + c2 == b2);
    
    if (a == b || b == c || a == c) {
        if (rt) printf("Isosceles right angled triangle\n");
        else printf("Isosceles right angled triangle\n");
    } else {
        if (rt) printf("Right-angled Scalene\n");
        else printf("Scalene\n");
    }
    
    return 0;
}