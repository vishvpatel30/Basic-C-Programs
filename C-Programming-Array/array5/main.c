#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int i,n,x=0,y,p;
    printf("\nEnter the limit");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\nEnter the number");
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {

        printf("\n The values are %d",a[i]);
        x++;
    }
    printf("\nThe counts are %d",x);
    printf("\nEnter the place of number you want");
    scanf("%d",&y);

    if(y<=n)
    {
        p=a[y];
        printf("\nThe number is %d",p);
    }
    else
        printf("\nThere is no such place");

    return 0;
}
