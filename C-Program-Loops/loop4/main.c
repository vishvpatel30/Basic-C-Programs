#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    printf("\nEnter the series=>");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
            printf("\n %d Even",i);
    }
    return 0;
}
