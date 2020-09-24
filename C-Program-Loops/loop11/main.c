#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,s;
    printf("\nEnter the number a=>");
    scanf("%d",&a);

    for(i=1;i<=10;i++)
    {
        s=a*i;
        printf("\n %d * %d = %d",a,i,s);
    }

    return 0;
}
