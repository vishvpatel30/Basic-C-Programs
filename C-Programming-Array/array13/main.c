#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("\nEnter the number");
                scanf("%d",&a[i][j]);
            }
        }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
            printf("%d",a[i][j]);
            }
            else if(i!=j)
                printf("*");

        }
        printf("\n");
    }
    return 0;
}
