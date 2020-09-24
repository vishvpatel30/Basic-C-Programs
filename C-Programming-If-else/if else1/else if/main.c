#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int op;

    printf("\nEnter 1 for square\nEnter 2 for cube\nEnter 3 for oddeven\nEnter  =>");
    scanf("%d",&op);


    if(op==1)
    {
    printf("Enter the number a\n");
    scanf("%d",&a);
    printf("The square is %d\n",a*a);
    }

    else if(op==2)
    {
    printf("\nEnter the number x =>");
    scanf("%d",&a);
    printf("The cube is %d\n",a*a*a);
    }

    else if(op==3)
    {
    printf("Enter the number p\n");
    scanf("%d",&a);
    if(a%2==0)
        printf("\n%d is even",a);
    else
        printf("\n%d is odd",a);
    }
    else
    {
        printf("\nWrong opt");
    }

        return 0;
}
