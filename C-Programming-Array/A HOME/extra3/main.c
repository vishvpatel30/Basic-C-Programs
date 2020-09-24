#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\nEnter the sides of triangle \na=> \nb=> \nc=> \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
        printf("\n The triangle is Equilateral triangle");
    else if(a==b||b==c||c==a||a!=b||b!=c||c!=a)
        printf("\n The triangle is isosceles triangle");
    else if(a*a==b*b + c*c || a*a + b*b==c*c ||a*a + c*c==b*b )
        printf("\n the triangle is right angled triangle");
    else
        printf("\n THe triangle is scalene");
    return 0;
}
