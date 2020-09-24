#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;


    do
    {
        printf("\nTo find a leap year Press 1 \n Or exit Press 2");
    scanf("%d",&b);
    if(b==1)
{


    printf("\nEnter the year =>");
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("\nIt is a leap year");
    }
    else
    {
        printf("\nIt is not a leap year");

    }
}
    }while(b!=2);
    return 0;
}
