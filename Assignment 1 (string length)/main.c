#include <stdio.h>
#include <string.h>

int main(void)
{


    char string[100];
    int length;

    printf("Enter a string to calculate it's length: ");
    scanf("%s", &string);
    length = strlen(string);
    printf("String length is: %i", length);
}
