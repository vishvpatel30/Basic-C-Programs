#include <stdio.h>
#include <stdlib.h>

struct date
{
    int dd,mm,yy;
};

struct student
{
    int no;
    char name[20];
    struct date dob,doj ;
};
int main()
{
    struct student s1;

    printf("\nEnter the number");
    scanf("%d",&s1.no);
    fflush(stdin);
    printf("\nEnter your name");
    gets(s1.name);
    printf("\nEnter the date of birth\n");
    scanf("%d %d %d",&s1.dob.dd,&s1.dob.mm,&s1.dob.yy);
    printf("\nEnter the date of joint\n");
    scanf("%d %d %d",&s1.doj.dd,&s1.doj.mm,&s1.doj.yy);

    printf("\n No \t Name \t Date of Birth \t Date of Joint");
    printf("\n %d \t %s \t %d/%d/%d \t %d/%d/%d",s1.no,s1.name,s1.dob.dd,s1.dob.mm,s1.dob.yy,s1.doj.dd,s1.doj.mm,s1.doj.yy);

    return 0;
}
