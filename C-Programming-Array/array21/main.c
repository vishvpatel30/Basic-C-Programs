#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i,u=0,l=0,s=0;
    printf("\nEnter any thing");
    gets(name);
    for(i=0;i<strlen(name);i++)
    {
        printf("\n%d",name[i]);
    }
    for(i=0;i<strlen(name);i++)
    {


    if(name[i]>=65 && name[i]<=90)
    {
        u++;
        printf("%c",name[i]+32);
    }
    else if(name[i]>=97 && name[i]<=122)
    {
        l++;
        printf("%c",name[i]-32);
    }
    else
    {
        s++;
        printf("%c",name[i]);
    }
    }
    return 0;
}
