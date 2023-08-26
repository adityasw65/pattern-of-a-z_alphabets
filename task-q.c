#include<stdio.h>
void main()
{
  int i,j;
  printf("\n");
  for ( i = 0; i <= 8; i++)
  {
    for ( j = 0; j <= 3; j++)
    {
      if((i==0 || i==4) && j>=1)
        printf("*");
      else if((i>=1 && i<=3) && (j==0 || j==3))
        printf("*");
      else if(i>=5 && j==3)
        printf("*");
      else 
        printf(" ");
      printf(" ");
    }    
    printf("\n");  
  }
  
}
