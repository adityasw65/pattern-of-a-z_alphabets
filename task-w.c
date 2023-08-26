#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=6;j++)
    {
      if(i<=2 && (j==0 || j==3 || j==6))
      printf("*");
      else if(i==3 && j!=0 && j!=3 && j!=6)
      printf("*");
      else 
      printf(" ");
      printf(" ");
    }
    printf("\n");
  }
  printf("\n");
}