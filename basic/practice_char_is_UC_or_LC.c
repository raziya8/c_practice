#include <stdio.h>
int main()
{
  char ch;
  printf( "Enter a letter  =  ");
  scanf ("%c", &ch);
  if ( ch >= 'a' && ch <= 'z')
 { 
  printf ("LOWER CASE\n");
   }
   else if ( ch >= 'A' && ch <= 'Z' )
   {
    printf ("UPPER CASE\n");
   }
    else {
    printf("Invalid\n");
    }
  return 0;
}
