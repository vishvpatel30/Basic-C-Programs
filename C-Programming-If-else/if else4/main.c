#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("Max value is %d",a);
    else
        printf("Max value is %d",b);
    return 0;
}
