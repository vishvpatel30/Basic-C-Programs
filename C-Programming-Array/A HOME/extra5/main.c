#include <stdio.h>
#include <stdlib.h>

void table()
{
    char i[100];
    printf("Enter your name");
    gets(i);

    if(i=='r')
        printf("you are godi");
    else
        printf("You are daye");

}
int main()
{
    table();
    return 0;
}
