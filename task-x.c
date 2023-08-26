#include<stdio.h>
void main()
{
  int i,j,k=0;
  for(i=0;i<=4;i++)
  {
    for(j=0;j<=4;j++)
    {
      if(i<=2 && (j==0+i || j==4-i))
      printf("*");
      else if(i>=3 && (j==2-k || j==2+k))
      printf("*");
      else 
      printf(" ");
      printf(" ");
    }
    printf("\n");
    if(i>=2)
    k++;
  }
}