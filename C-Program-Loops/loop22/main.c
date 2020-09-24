#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,s;
    printf("Enter the number =>");
    scanf("%d",&a);
    i=1;
    do
    {
        s=a*i;
        printf("\n%d * %d = %d",a,i,s);
        i++;
    }while(i<=10);
    return 0;
}
