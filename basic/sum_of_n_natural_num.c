#include <stdio.h>

//cd /Users/juniper/c_practice/basic
int main()
{
  int n ;
  printf ("enter a no. : ");
  scanf ("%d", &n );

  int sum = 0 ;
  for  (int  i = 0 ; i<=n; i++)
    sum = sum +i;
    {
     printf("sum is %d \n",sum);
  }
  return 0;
} 
