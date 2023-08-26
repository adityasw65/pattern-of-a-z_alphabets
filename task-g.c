#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=9;i++)
  {
    for(j=0;j<=7;j++)
    {
      if(i==0 && j>=1 && j<=4)
        printf("*");
      else if(((i>=1 && i<=2) || i==8) && (j==0 || j==4))
        printf("*");
      else if(i==3 && (j==0 || j==4 || j==7))
        printf("*");
      else if(i==4 && ((j>=1 && j<=4) || j==6))
        printf("*");
      else if(i==5 && (j==4 || j==5))
        printf("*");
      else if(i==6 && (j==3 || j==4))
        printf("*");
      else if(i==7 && (j>=1 && j<=2 || j==4))
        printf("*");
      else if(i==9 && (j>=1 && j<=3))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}






