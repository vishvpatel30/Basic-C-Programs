#include <stdio.h>
#include <stdlib.h>

int main()
{


    FILE *f1,*f2,*f3;

    f1=fopen("D:\\13.txt","w");
    f2=fopen("D:\\4.txt","r");
    f3=fopen("D:\\5.txt","r");

    char ch,ch1;
    while(ch!=EOF)
    {
        ch=getc(f2);


      putc(ch,f1);


    }
    while(ch1!=EOF)
    {
        ch1=getc(f3);
        putc(ch1,f1);
    }


    fclose(f2);
    fclose(f3);
     fclose(f1);

    printf("\nCopied");
}
