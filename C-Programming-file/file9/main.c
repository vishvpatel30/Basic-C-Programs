#include<stdio.h>

struct student
{
	int roll;
	char name[25];
	float marks;
};

int main()
{
	FILE *fp;
	char ch;
	struct student stu;

	fp = fopen("D:\\1.txt","w");

	if(fp==NULL)

	{
		printf("\nCant open file");
	}

	do
	{
		printf("\nEnter rollno =>");
		scanf("%d",&stu.roll);

		fflush(stdin);

		printf("Enter name =>");
		scanf("%s",stu.name);

		fflush(stdin);

		printf("Enter marks=>");
		scanf("%f",&stu.marks);

		fwrite(&stu,sizeof(stu),1,fp);

		fflush(stdin);

		printf("\nDo you want to add another data(y/n)=>");
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');

	printf("\nData written successfully...");


	fclose(fp);

	fp = fopen("D:\\1.txt","r");

	printf("\nRecords");

	printf("\n\tRoll\tName\tMarks\n");

	printf("\n===================================");

	while(fread(&stu,sizeof(stu),1,fp)>0)
	{
		printf("\n\t%d\t%s\t%.2f",stu.roll,stu.name,stu.marks);
	}

	printf("\n=======================================");

	fclose(fp);
 }
