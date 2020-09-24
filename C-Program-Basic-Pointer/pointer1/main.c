#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,*ptra,*ptrb;

    printf("\nEnter the value of a=>");
    scanf("%d",&a);

    printf("\nEnter the value of b=>");
    scanf("%d",&b);

    ptra=&a;
    ptrb=&b;

    printf("\nAddition is %d",*ptra + *ptrb);
    printf("\nSubtraction is %d",*ptra - *ptrb);
    printf("\nMultiplication is %d",*ptra * *ptrb);
    printf("\nDivision is %d",*ptra / *ptrb);
}
