#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100],c[100];
    int i;
    printf("\nEnter any thing");
    gets(a);
    printf("\nEnter any thing");
    gets(b);
    for(i=0;i<strlen(a);i++)
    {
            c[i]=a[i];
    }
    for(i=0;i<strlen(b);i++)
    {
            c[i+strlen(a)]=b[i];
    }
    printf("\nThe mix is %s",c);
    return 0;
}
