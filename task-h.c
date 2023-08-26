#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=8;i++)
  {
    for(j=0;j<=4;j++)
    {
      if(i<=3 && j==0)
        printf("*");
      else if(i==4 && j<=3)
        printf("*");
      else if(i>4 && (j==0 || j==4))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}




