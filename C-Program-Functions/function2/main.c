#include <stdio.h>
#include <stdlib.h>

/*
  void add()  {}
  void add(int a,int b) {}
  int add() {}
  int add(int a,int b) {}
  */

  int max(int a,int b)
  {
      if(a>b)
      {
          return a;
      }
      else
      {
          return b;
      }
  }
  void sq(int x)
  {
      printf("\nThe square is => %d",x*x);
  }
  int main()
  {
      int a,b,c;

      printf("\nEnter a value of a =>");
      scanf("%d",&a);
      printf("\nEnter a value of b =>");
      scanf("%d",&b);

      c=max(a,b);
      printf("\nMax value = %d",c);
      sq(c);
  }

