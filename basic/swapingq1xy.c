#include <stdio.h>
int main()
{
    int x = 10, y = 5;
 
    // Code to swap 'x' and 'y'
    x = x * y; // x -50
    y = x / y; // y -10
    x = x / y; // x - 5
 
    printf("After Swapping: x = %d, y = %d", x, y);
 
    return 0;
}
