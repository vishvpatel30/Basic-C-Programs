#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("\nEnter any number=>");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
