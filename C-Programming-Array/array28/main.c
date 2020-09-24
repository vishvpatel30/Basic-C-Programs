#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i,l,j,k;

    printf("\nEnter the name=>");
    gets(a);
    l=0;
    while(a[l]!='\0')
    {
        printf("%c",a[l]);
        l++;
    }
    i=l;
    while(i>=0)
    {
        printf("%c",a[i]);
        i--;
    }
    i=l-1;
    j=0;
    k=0;
    while(i>=0)
    {
        printf("\n%c %c",a[i],a[j]);

        if(a[i]!=a[j])
        {

            k=1;
            break;
        }

        i--;
        j++;
    }

    if(k==0)
    {
        printf("\nIts palindrome");
    }
    else
    {
        printf("\nIts not palindrome");
    }

    return 0;
}
