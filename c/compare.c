// basic pseudo code
/*
    compare X and Y
    if X is greater than Y:
        print X is greater than Y
    else if X is less than Y:
        print Y is greater than X
    else:
        they are equal
*/

// will include the stdio lib to get access to the print function

#include <stdio.h>

int main(void) {
    int X = 10;
    int Y = 20;

    if (X > Y) // just like the JS if conditional
    {
        printf("X is greater than Y");
    }
    else if (X < Y)
    {
        printf("Y is greater than X");
    }
    else {
        printf("They are equal");
    }
}