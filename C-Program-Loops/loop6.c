#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,s=0,c=0;
    printf("\nthe series is =>");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%7==0)
        {
            printf("\n %d",i);
            s=s+i;
            c++;
        }

    }
        printf("\nThe sum is %d",s);
        printf("\nThe count is %d",c);


    return 0;
}
