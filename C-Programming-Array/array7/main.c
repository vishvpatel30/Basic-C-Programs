#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],c[100];
    int i,n1,n2;
    printf("\nEnter the limit a=>");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("\nEnter the limit b=>");
     scanf("%d",&n2);
    for(i=1;i<=n2;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&b[i]);
        c[i+n1]=b[i];
    }

    printf("\nAll the numbers of a and b");
    for(i=1;i<=(n1+n2);i++)
    {
         printf("\n%d ",c[i]);
    }

    return 0;
}
