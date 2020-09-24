#include <stdio.h>

int main()
{
    int a,b,c,sum;
    printf("Enter the marks of three subjects of a, b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum>50)
        printf("Student Pass\n");
    else
        printf("Student Fail\n");
    return 0;
}
