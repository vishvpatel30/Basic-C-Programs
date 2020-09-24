#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,s=1;
    printf("Enter the number =>");
    scanf("%d",&a);
    i=1;
    do
    {
        s=s*i;
      printf("%d *",i);
      i++;

    }while(i<=a);
    printf(" = %d",s);

    return 0;
}
