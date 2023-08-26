#include<stdio.h>
void main()
{
  int i,j;
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=6;j++)
    {
      if(i<=3 && (j==0+i || j==6-i))
      printf("*");
      else 
      printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}