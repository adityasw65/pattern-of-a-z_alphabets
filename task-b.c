#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=9;i++)
  {
    for(j=0;j<=4;j++)
    {
      if(i<=4 && j==0)
        printf("*");
      else if((i==5 || i==9) && j<=3)
        printf("*");
      else if(i>=6 && i<=8 && (j==0 || j==4))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}


