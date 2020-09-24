#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i,c=0;
    printf("\nEnter any thing");
    gets(name);
    for(i=0;i<strlen(name);i++)
    {
        if(name[i]=='v')
        {
            c++;
        }
    }
    printf("\nThe number of count are is %d",c);
    return 0;
}
