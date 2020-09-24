#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i,c=0;
    printf("\nEnter any sentence");
    gets(name);
    for(i=0;i<strlen(name);i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            c++;
        }
    }
    printf("\nThe counts are => %d",c);
    return 0;
}
