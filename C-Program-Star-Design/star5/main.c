#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j;
    printf("\nEnter the number=>");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    return 0;
}
