#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for(i=0;i<=9;i++)
  {
    for(j=0;j<=2;j++)
    {
      if(i==1 && j<=2)
        printf("*");
      else if((i==0 || i==2 || i>=4) && j==1)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
  }
}






