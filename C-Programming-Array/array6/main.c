#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i,n;
    printf("\nEnter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter the numbers");
        scanf("%d",&a[i]);
    }
    for(i=n;i>=1;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
