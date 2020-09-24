#include <stdio.h>
#include <string.h>

int main()
{
    char a[100]={""},b[100]={""},c[100];
    int i,m,k;
    m=0,k=0;
    printf("\nEnter any thing");
    gets(c);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
        {
            a[k]=c[i];
            k++;
        }
        else
        {
            b[m]=c[i];
            m++;
        }
    }
   printf("The vowels are %s",a);
   printf("The consonants are %s",b);
    return 0;
}
