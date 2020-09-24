#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    char op;
    do
    {
    fflush(stdin);
    printf("\n\n\nEnter the option\nPress a for addition\nPress s for subtraction\nPress m for multiplication\nPress d for division\nPress e for exit =>");
    scanf("%c",&op);

    printf("\nEnter the x");
    scanf("%d",&x);

    printf("\nEnter the number y");
    scanf("%d",&y);
    //psps xy

    if(op=='a')
    {
        z=x+y;
        printf("\nAdd = %d",z);
    }
    else if(op=='s')
    {
        z=x-y;
          printf("\nSub = %d",z);
    }

    else if(op=='m')
    {
        z=x*y;
          printf("\nMul = %d",z);
    }
    else if(op=='d')
    {
        z=x/y;
          printf("\nDiv %d",z);
    }
    else if(op=='e')
    {

    }
    else
    {
        printf("\nWrong opt");
    }


    }while(op!='e');


    return 0;
}

