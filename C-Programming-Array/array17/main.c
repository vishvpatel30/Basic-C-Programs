#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i;
    printf("\nEnter any thing");
    gets(name);
    for(i=0;i<strlen(name);i++)
    {
        printf("\n%c",name[i]);
    }

    return 0;
}
