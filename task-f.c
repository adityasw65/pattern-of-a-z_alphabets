#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=10;i++)
  {
    for(j=0;j<=6;j++)
    {
      if(i==0 && (j==4 || j==5))
        printf("*");
      else if(i==1 && (j==3 || j==6))
        printf("*");
      else if(i>=2 && i<=4 && j==3)
        printf("*");
      else if(i==5 && j<=6)
        printf("*");
      else if(i>=6 && j==3)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}

