#include<stdio.h>
void main()
{
  int i,j;
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=3;j++)
    {
      if((i==0 || i==3) && j<=3)
      printf("*");
      else if((i==1 && j==2) || (i==2 && j==1))
      printf("*");
      else
      printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}


