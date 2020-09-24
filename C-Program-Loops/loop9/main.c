#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,s=1;
    printf("\nEnter the value =>");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        printf(" %d *",i);
        s=s*i;
    }
    printf("\n the factorial is %d",s);
    return 0;
}
