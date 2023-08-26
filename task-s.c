#include<stdio.h>
void main()
{
  int i,j;
  for(i=0;i<=6;i++)
  {
    for(j=0;j<=3;j++)
    {
      if((i==0 || i==3 || i==6) && (j==1 || j==2))
        printf("*");
      else if((i==1 || i==5) && (j==0 || j==3))
        printf("*");
      else if((i==2 && j==0) || (i==4 && j==3))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}