#include <stdio.h>
#include <stdlib.h>

void swap(int *ptra, int *ptrb)
{
    int c;
    c=*ptra;
    *ptra=*ptrb;
    *ptrb=c;

}

int main()
{
    int a,b;

    printf("Enter the value a=>");
    scanf("%d",&a);

    printf("Enter the value b=>");
    scanf("%d",&b);


    printf("\na=%d, b=%d",a,b);

    swap(&a,&b);


    printf("\na=%d, b=%d",a,b);


}
