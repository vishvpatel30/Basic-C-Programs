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
    int n,i,m;

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
    do
    {
    printf("\n1 for Pass , 2 for Fail , 3 for Pass & Fail , 4 for exit=>");
    scanf("%d",&m);
    printf("\n No \t Name \t English \t Hindi \t Total");
    printf("\n");
    switch(m)
    {
        case(1):
        for(i=0;i<n;i++)
        {
              if(st1[i].english>=35 && st1[i].hindi>=35)
              {
                   printf("\n %d \t %s \t %d \t\t %d ",st1[i].no,st1[i].name,st1[i].english,st1[i].hindi);
                   printf("\tPass");
              }
        }
        break;
        case(2):
         for(i=0;i<n;i++)
        {
              if(st1[i].english<35 || st1[i].hindi<35)
              {
                   printf("\n %d \t %s \t %d \t\t %d ",st1[i].no,st1[i].name,st1[i].english,st1[i].hindi);
                   printf("\tFail");
              }
        }
        break;

        case(3):
        for(i=0;i<n;i++)
        {
              printf("\n %d \t %s \t %d \t\t %d ",st1[i].no,st1[i].name,st1[i].english,st1[i].hindi);
              if(st1[i].english<35 || st1[i].hindi<35)
              printf("\tFail");
              else
              printf("\tPass");
        }
         break;
        default:
            break;
    }
    }while(m!=4);

    return 0;
}

