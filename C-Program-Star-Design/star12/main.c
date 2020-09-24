#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("\nEnter any number=>");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
