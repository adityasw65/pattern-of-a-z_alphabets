#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=5;i++)
  {
    for(j=0;j<=7;j++)
    {
      if(i==0 && (j==0 || j%2==0))
        printf("*");
      else if(i==1 && (j==0 || j%2!=0))
        printf("*");
      else if(i>=2 && (j==0 || j==4 || j==7))
        printf("*");
      else
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}


