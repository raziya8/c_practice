#include <stdio.h>
int main()
{
  int n ;
  printf ("enter a no. :   ");
  scanf ("%d", &n );
  int fact = 1 ;
  for ( int i = 1 ; i<=n ; i++)  
  {
     fact = fact * i;
  }
  printf ("Fctorial no. is : %d\n", fact );
  return 0;
} 