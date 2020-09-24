#include <stdio.h>
#include <stdlib.h>

struct student
{
    int no;
    char name[20];
};
int main()
{
    struct student st1,st2,st3;


    printf("\nEnter the number");
    scanf("%d",&st1.no);
    fflush(stdin);
    printf("\nEnter your name");
    gets(st1.name);

    printf("\nEnter the number");
    scanf("%d",&st2.no);
    fflush(stdin);
    printf("\nEnter your name");
    gets(st2.name);

    printf("\nEnter the number");
    scanf("%d",&st3.no);
    fflush(stdin);
    printf("\nEnter your name");
    gets(st3.name);
    printf("\n The number is %d and %s ",st1.no,st1.name);
    printf("\n The number is %d and %s ",st2.no,st2.name);
    printf("\n The number is %d and %s ",st3.no,st3.name);
    return 0;
}
