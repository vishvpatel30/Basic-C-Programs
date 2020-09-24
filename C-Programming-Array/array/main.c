#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i,b;
    printf("\nEnter the limit =>");
    scanf("%d",&b);

    for(i=1;i<b;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&a[i]);
    }

    for(i=1;i<b;i++)
    {

            printf("%d",a[i]*-1);

    }
    return 0;
}
