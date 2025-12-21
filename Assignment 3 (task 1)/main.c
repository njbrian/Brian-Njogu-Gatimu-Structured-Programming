#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 10;   // num is a variable storing the value 10



    int *ptr;       // ptr is a pointer to int
    ptr = &num;     // ptr stores the address of num


    int x = 20;
    int *p = &x;
    printf("%d", *p);   // prints 20
    *p = 30;            // modifies x through the pointer
    printf("%d", x);    // prints 30


    void incrementValue(int x) { x++; }


    void incrementReference(int *x) { (*x)++; }
}
