#include <stdio.h>
#include <stdlib.h>

void table()
{
     int a,i;
    i=1;
    printf("\nEnter any number");
    scanf("%d",&a);
    for(i=0;i<=10;i++)
    {
        printf("\n %d * %d = %d",a,i,a*i);
    }
}
int main()
{
    table();

    ///

    table();
    return 0;
}
