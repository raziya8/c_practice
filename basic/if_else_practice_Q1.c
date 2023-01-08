#include <stdio.h>
int main()
{
  int age;
  printf("enter age: ");
  scanf("%d", &age);
  
  if ( age > 18 )
  {
	printf("Person age is = %d\n", age );
    	printf("person is adult\n");
	printf("He will go for vaccation\n");
    	printf("He  can dirve\n");
  }
  else {
    printf("He is not adult"); 
}
 
  return 0;
  
}
