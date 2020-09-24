#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int rollno;
    char name[20];
    int i,n;

    printf("\nEnter how many records you want to add=>");
    scanf("%d",&n);

    fp=fopen("D:\\1.txt","w");

    for(i=0;i<n;i++)
    {
        printf("\nEnetr the no=>");
        scanf("%d",&rollno);
        fflush(stdin);
        printf("\nEnter the name=>");
        gets(name);
        fprintf(fp,"\n %d %s",rollno,name);
    }
    fclose(fp);

    fp=fopen("D:\\1.txt","r");

    printf("\nRecords");

    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d %s",&rollno,name);
        printf("\n %d %s",rollno,name);
    }
    fclose(fp);

}
