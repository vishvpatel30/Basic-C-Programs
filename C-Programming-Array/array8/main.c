#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100],c[100];
    int i,n,k,m;
    printf("\nEnter the limit of c =>");
    scanf("%d",&n);

    k=0;
    m=0;
    for(i=0;i<n;i++)
    {
        printf("Enter the number=>");
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++)
    {
        if(c[i]%2==0)
        {
            a[k]=c[i];
            k++;
        }
        else
        {
            b[m]=c[i];
            m++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("\nThe number is even %d",a[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("\nThe number is odd %d",b[i]);
    }

    return 0;
}
