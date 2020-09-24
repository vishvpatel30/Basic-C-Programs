#include <stdio.h>
#include <stdlib.h>

main()
{
int i=0;
FILE *f1;
f1 =fopen("D:\\1.txt","r");
char ch;
while (ch!=EOF)
{
    ch=getc(f1);





         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c",ch);
        i++;
    }

}
printf("\n%d",i);

fclose(f1);


}
