#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=8;i++)
  {
    for(j=0;j<=7;j++)
    {
      if(i==0 && j>=2 && j<=5)
        printf("*");
      else if(i==1 && (j==1 || j==6))
        printf("*");
      else if((i==2 || i==6) && (j==0 || j==7 || (j>=2 && j<=5)))
        printf("*");
      else if((i>=3 && i<=5) && (j==0 || j==1 || j==5 || j==7))
        printf("*");
      else if(i==7 && (j==0 || j==5 || j==7))
        printf("*");
      else if(i==8 && (j==1 || j==2 || j==3 || j==6))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}


