#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=11;i++)
  {
    for(j=0;j<=6;j++)
    {
      if(((i>=0 && i<=3) || i==9) && j==4)
        printf("*");
      else if((i==4 || i==8) && (j>=1 && j<=4))
        printf("*");
      else if(i>=5 && i<=7 && (j==0 || j==4))
        printf("*");
      else if((i==10 && j==5) || (i==11 && j==6))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}

