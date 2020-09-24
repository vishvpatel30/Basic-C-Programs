#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=0;
    char ans;

    printf("Enter the number a=>");
    scanf("%d",&a);

     printf("Enter the number b=>");
    scanf("%d",&b);

    a>b ? printf("\n%d is max",a) : printf("\nB is max");

    c= a>b?a:b;
    printf("\n%d is greater ",c);

    ans=a>b?'a':'b';
    printf("\n%c is greater",ans);

    return 0;
}
