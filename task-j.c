#include<stdio.h>
void main()
{
  int i,j;
  for(i=0;i<=9;i++)
  {
    for(j=0;j<=4;j++)
    {
      if(i==1 && j>=2)
        printf("*");
      else if((i==0 || i==2 || i>=4 && i<=7) && j==3)
        printf("*");
      else if(i==8 && (j==0 || j==3))
        printf("*");
      else if(i==9 && (j==1 || j==2))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}



