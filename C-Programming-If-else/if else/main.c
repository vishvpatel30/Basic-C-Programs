#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    printf("Enter the marks of subjects a, b, c\n");
    scanf("%d %d %d",&a,&b,&c);
    x=a+b+c;
    printf("Total marks is %d\n",x);
    if(x<50)
        printf("The student got C Grade");
    else
    {
        if(x>50 && x<100)
            printf("The student got B Grade");
        else
        {
            if(x>100)
                printf("The student got A Grade");
        }
    }
    return 0;
}
