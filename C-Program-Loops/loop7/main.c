#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,s=0;
    printf("\nEnter the value=>");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        printf(" %d +",i);
        s=s+i;
    }
    printf("\nThe sum is => %d",s);

    return 0;
}
