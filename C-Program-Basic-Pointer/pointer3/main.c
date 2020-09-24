#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,n;
    int *ptr;

    printf("\nEnter the number =>");
    scanf("%d",&n);

    ptr=a;

    for(i=0;i<n;i++)
    {
        printf("\nEnter the value =>");
        scanf("%d",ptr);
        ptr++;

    }

    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

}
