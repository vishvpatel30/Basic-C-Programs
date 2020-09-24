#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i,n;
    printf("\nEnter the limit");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&a[i]);

    }

    for(i=1;i<n;i++)
    {
        printf("\n Square of %d is %d",a[i],a[i]*a[i]);
    }
    return 0;
}
