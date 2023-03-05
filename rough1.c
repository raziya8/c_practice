#include <stdio.h>
////cd /Users/juniper/c_practice/basic
int main (){
int n;
printf("enter number : ");
scanf ("%d\n", n );
int fact = 1;
for(int i =1; i<=n; i++){
    fact = fact * i;

}
printf("print final factorial is %d", fact); 
return 0;

}