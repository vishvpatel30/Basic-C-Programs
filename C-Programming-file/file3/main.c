#include <stdio.h>
#include <stdlib.h>


int main()
{
int i=0,j=0;
FILE *f1;
f1 =fopen("D:\\1.txt","r");
char ch;
while (ch!=EOF)
{
    ch=getc(f1);
    if(ch==' ')
    {
        i++;
    }
    else if(ch=='\n')
    {
        j++;
    }
}
printf("%d is space \n %d is number of lines",i,j);
fclose(f1);

}
