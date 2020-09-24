#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i,n,m;
    printf("\nEnter the limit");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&a[i]);
    }
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(m<a[i])
            {
                m=a[i];
            }
    }
    printf("\nThe maximum number is %d",m);


    return 0;
}
