#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,*b;

    a=50;
    b=&a;
    printf("\na=%d \tb=%u",a,b);

    printf("\na=%d \t*b=%d",a,*b);

    *b=20;
    printf("\na=%d \t*b=%d",a,*b);

    a=50;
    printf("\na=%d \t*b=%d",a,*b);


}
