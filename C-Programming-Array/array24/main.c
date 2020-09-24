#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i,sp;
    sp=1;
    printf("\nEnter any thing");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(sp==1)
        {
            sp=0;
            printf("%c",a[i]-32);
        }
        else
        {
            printf("%c",a[i]);
        }
        if(a[i]==' ')
        {
            if(sp==0)
            {
                sp=1;
            }
        }
    }
    return 0;
}
