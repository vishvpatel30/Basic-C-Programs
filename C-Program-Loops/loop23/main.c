#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    printf("\nEnter the number =>");
    scanf("%d",&a);
    i=1;
    do
    {
        if(i%2==0)
            printf("\n%d is even",i);
            else
                printf("\n%d is odd",i);
            i++;

    }while(i<=a);

    return 0;
}
