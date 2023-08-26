#include<stdio.h>
void main()
{
  int i,j,k=3;
  for(i=0;i<=9;i++)
  {
    for(j=0;j<=3;j++)
    {
      if(i<=2 && j==0)
        printf("*");
      else if(i>2 && i<=6 && (j==0 || j==k))
        printf("*");
      else if(i>=7 && i<=9 && (j==0 || j==k))
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }
    printf("\n");
    if(i>2 && i<6)
      k--;
    if(i>=6 && i<9)
      k++;
  }
}



