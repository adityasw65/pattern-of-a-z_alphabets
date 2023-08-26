#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=5;i++)
  {
    for(j=0;j<=4;j++)
    {
      if((i==0 || i==5) && j>=1)
        printf("*");
      else if(i>=1 && i<=4 && j==0)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}


