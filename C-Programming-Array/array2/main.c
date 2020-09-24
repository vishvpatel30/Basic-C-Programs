#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i,n,x=0,y=0,p=0,q=0,z=0;
    printf("\nEnter the limit");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d is even",a[i]);
            q=q+a[i];
            x++;
        }
        else
        {
            printf("\n%d is odd",a[i]);
            p=p+a[i];
            y++;
        }

    }

    printf("\nEven sum is %d",q);
    printf("\nTotal %d",p+q);
    printf("\nTotal count%d",z);
    printf("\nodd sum is %d",p);



    return 0;
}
