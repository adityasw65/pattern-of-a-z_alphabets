#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=4;i++)
  {
    for(j=0;j<=4;j++)
    {
      if(i<=1 && (j==i || j==4-i))
      printf("*");
      else if(i>=2 && j==4-i)
      printf("*");
      else 
      printf(" ");
      printf(" ");
    }
    printf("\n");
  }
  printf("\n");
}


