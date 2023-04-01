#include <stdio.h>
int x = 20 ; // global variable
void function1() { printf("function 1: %d\n" , x);}
void function2() { printf("function 1: %d\n" , x);}
int main ()
{
    function1();
    function2();
    return 0;
    
}