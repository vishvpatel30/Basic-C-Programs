#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,s,z=0;
    printf("Enter the value =>");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s = i*i;
        printf("%d +",s);
        z=z+s;
    }
    printf("\nThe sum is %d",z);

    return 0;
}
