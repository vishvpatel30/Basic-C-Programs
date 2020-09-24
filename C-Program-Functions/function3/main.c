#include <stdio.h>
#include <stdlib.h>

void scan(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter the values");
        scanf("%d",&a[i]);
    }
}

void printarray(int a[],int n)
{
    int i;
    printf("\nThe values");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}
int main()
{
    int a[100],b[100];
    int n;

    printf("\nEnter the limit");
    scanf("%d",&n);

    scan(a,n);
    scan(b,n);
    printarray(a,n);
    printarray(b,n);

    return 0;
}
