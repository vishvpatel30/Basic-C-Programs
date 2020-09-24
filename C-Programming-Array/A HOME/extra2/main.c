#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    i=1;
    do
    {
        printf("\nThere are 21 matchsticks.Those who picks up 21st matchstick is looser");
        printf("\nPick 1,2,3 or 4 matchsticks at a time \n");
        scanf("%d",&a);
        if(a<=4)
        {
            printf("\nThe computer picks a number \n");
            i=21%a;
            printf("\n%d",i);

        }
        else
        {
            break;
        }

        i++;

    }while(i!=21);
    return 0;
}
