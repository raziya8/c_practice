#include <stdio.h>
int main()
{
   int day; // 1 - mon , 2 tue, 3-wed //
   printf("enter day (1-7) : ");
   scanf("%d", &day);
 switch (day)
{
  case 1 : printf("monday\n");
           break;
  case 2 : printf("tuesday\n");
          break;
  case 3: printf("wednesay\n");
          break;
  case 4: printf("thursday\n");
          break;
  default :printf ("invalid no.\n");
}
  return 0;
 } 
