#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,k=1;
    printf("\nEnter the number=>");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {

            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
