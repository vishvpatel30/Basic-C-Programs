#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i,n,p=0,x=0,d;
    printf("\nEnter the limit");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&a[i]);
    }


    printf("\nEnter the divider");
    scanf("%d",&d);
    for(i=1;i<=n;i++)
    {
        if(a[i]%d==0)
        {
            printf("\n%d ",a[i]);
            p=p+a[i];
            x++;
        }
    }
    printf("\nTotal sum %d",p);
    printf("\nTotal count %d",x);

    return 0;
}
