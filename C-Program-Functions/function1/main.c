#include <stdio.h>
#include <stdlib.h>

void square()
{
     int a;
     printf("\nEnter the number");
     scanf("%d",&a);
    printf("%d",a*a);
}
void cube()
{
    int a;
    printf("\nEnter the number");
     scanf("%d",&a);
    printf("%d",a*a*a);
}
void oddeven()
{
    int a;
    printf("\nEnter the number");
     scanf("%d",&a);
    if(a%2==0)
        printf("\nIt is even");
    else
        printf("\nIt is odd");
}
int main()
{
    square();

    cube();

    oddeven();

    return 0;
}
