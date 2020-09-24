#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i,n,p=0,x=0;
    printf("\nEnter the limit");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]%7==0)
        {
            printf("\n%d ",a[i]);
            p=p+a[i];
            x++;
        }
    }
    printf("\nTotal sum %d",p);
    printf("\ncount %d",x);

    return 0;
}
