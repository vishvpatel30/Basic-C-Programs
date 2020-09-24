#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("\nthe series is =>");
    for(i=1;i<=100;i++)
    {
        if(i%7==0)
            printf("\n %d",i);
    }
    return 0;
}
