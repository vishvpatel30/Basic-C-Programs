#include <stdio.h>
#include <stdlib.h>

struct stu
{
    int no;
    char name[20];
    int english;
    int hindi;

};
int main()
{
    struct stu st1[100];
    int n,i,m,pos;

    printf("Enter the number of students =>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter the number =>");
        scanf("%d",&st1[i].no);
        fflush(stdin);
        printf("\nEnter the name =>");
        gets(st1[i].name);
        printf("\nEnter the marks of English =>");
        scanf("%d",&st1[i].english);
        printf("\nEnter the marks of hindi =>");
        scanf("%d",&st1[i].hindi);

    }
    m=st1[0].english+st1[0].hindi;
    pos=0;


    printf("\n No \t Name \t English \t Hindi \t Total \t Pass/Fail");
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(m<st1[i].english+st1[i].hindi)
        {
            pos = i;
            m=st1[i].english+st1[i].hindi;
        }


    }
    if(st1[i].english<35 || st1[i].hindi<35)
    {
        printf("\n %d \t %s \t %d \t\t %d \t %d ",st1[pos].no,st1[pos].name,st1[pos].english,st1[pos].hindi,st1[pos].english+st1[pos].hindi);
        printf("Fail");
    }
    else
    {
        printf("\n %d \t %s \t %d \t\t %d \t %d ",st1[pos].no,st1[pos].name,st1[pos].english,st1[pos].hindi,st1[pos].english+st1[pos].hindi);
        printf("Pass");
    }

    return 0;
}
