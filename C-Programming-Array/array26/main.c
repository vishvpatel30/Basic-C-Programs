#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i;

    printf("\nEnter the name=>");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
        printf("%c",a[i]);
        i++;
    }
    printf("\n %d",i);
    return 0;
}
