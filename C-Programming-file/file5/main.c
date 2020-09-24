#include <stdio.h>
#include <stdlib.h>

int main()
{

FILE *f1,*f3;
f1 =fopen("D:\\1.txt","r");
f3=fopen("D:\\3.txt","w");
char ch;
while (ch!=EOF)
{
    ch=getc(f1);

         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c",ch);
    }
    else
        putc(ch,f3);

}

fclose(f1);
fclose(f3);

printf("\nCopied");


}
