#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i,l;

    printf("\nEnter the name=>");
    gets(a);

    l=0;
    while(a[l]!='\0')
    {
        l++;
    }
    printf("\n %d",l);
    i=l;
    while(i>=0)
    {
        printf("%c",a[i]);
        i--;
    }
    return 0;
}
