#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=7;i++)
  {
    for(j=0;j<=4;j++)
    {
      if(i==0 && j>=1 && j<=3)
        printf("*");
      else if(i>=1 && i<=2 && (j==0 || j==4))
        printf("*");
      else if(i==3 && j<=3)
        printf("*");
      else if(i>=4 && i<=6 && j==0)
        printf("*");
      else if(i==7 && j>=1)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}

