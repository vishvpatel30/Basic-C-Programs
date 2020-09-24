#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1,*f2,*f3;

    f1=fopen("D:\\1.txt","r");
    f2=fopen("D:\\4.txt","w");
    f3=fopen("D:\\5.txt","w");

    char ch;
    while(ch!=EOF)
    {
        ch=getc(f1);

        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        putc(ch,f2);
    }
        else
        {
            putc(ch,f3);
        }

    }

    fclose(f1);
    fclose(f2);
    fclose(f3);

    printf("\nCopied");
}
