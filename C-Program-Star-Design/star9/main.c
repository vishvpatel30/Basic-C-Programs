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
            printf("%c",j+96);
        }
            printf("\n");
    }
    return 0;
}
