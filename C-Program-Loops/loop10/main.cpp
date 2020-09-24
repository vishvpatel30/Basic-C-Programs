#include <stdio.h>

int main()
{
    int a,i,s=0;
    printf("\nEnter the number =>");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            printf("+ %d",i*i);
            s=s+(i*i);
        }
        else
        {
            printf("- %d",i*i);
        s=s-(i*i);
        }
    }
    printf("\nThe answer is %d",s);
    return 0;
}
