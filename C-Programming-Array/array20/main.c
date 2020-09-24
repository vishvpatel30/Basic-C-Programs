#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i,l=0,u=0,s=0;
    printf("\nEnter any thing ");
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
        }
        else if(name[i]>=97 && name[i]<=122)
        {
            l++;
        }
        else
        {
            s++;
        }
    }
    printf("\nThe upper case is %d \nThe lower case is %d \n space is %d",u,l,s);

    return 0;
}
