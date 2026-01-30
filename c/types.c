/*
    Data types in C
    ===============
        Just like anyother language, C alos have primitive data types, this primitives helps us build basic apps like:
        printing your name in the terminal using either the char data type or string
        in C the Numeric Data types are:
            1. Integer -: Can be any negative or positive whole number, this data type can help us hold values from
                (-2000000000 to 2000000000)
            2. Long -: this data type can hold figures more than the normal integer would hold, consider this to be
                bigint in JS an example would be described below for you to understand
            3. Float -: Can be any negative or positive real number. you can determine the number of decimals the float can be.
                this is termed as Floating point imprecisions and it brings uus to another numeric data type called double
            4. Double -: This is just like the long but meant for float
            
        # Non-Numeric Data
        The non numeric data types primitively can be either a memory allocation or a character. most at times memory allocations
        are done by the devlopers when they are trying to access or assign space for future modifications. here we i wont talk
        talk about that. i will do that later in one of the repositories
            1. Char -: this can be either one number, alphabet, symbol, expression or any that is enclosed in a 
            single quotation mark.
            2. String -: this is a set or characters, could be numbers, words, expressions, or any enclosed in a 
            double quotation marks. in most cases string modifications are not allowed in the normal stdio.h libs
            hence to have access to it modification you would have to use the lib strings.h
            3. Booleans -: this is the data type that is either true or false. this data type is also not available in the
            stdio.h lib hence would have to use the stdbool.h to have access to it

    Remaining data types are not primitive and most created by the developer. i would explain each one when i use them in 
    future usage.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// prepping the compiler in advance to lookout for the functions below,by convetion that is the best way to do it
// you can define them above the main function but it is not a good practice. will explain why in the function repo.

void justInt(int x, int y);
void usingLong (long long x, long long y);
void normalFloat(float x, float y);
void precisionFloat (double x, double y);
void oneChar (char x);
void multiChar (char x[10], int n);




int main(void){
    printf("==========================================================\n");
    printf("Numeric Data Types\n");
    printf("==========================================================\n");

    justInt(20, 90);
    usingLong(20, 90);

    // now i would increase the number
    justInt(2000000000, 1000000000);
    usingLong(2000000000, 1000000000);

    // floats
    normalFloat(1,3);
    precisionFloat(1,3);

    printf("==========================================================\n");
    printf("Non-Numeric Data Types\n");
    printf("==========================================================\n");
    
    // char
    oneChar('A');

    // string or multi-chars
    multiChar("Davisone", 0);

    bool T = true;
    bool F = false;
    // the condition below should print False
    if (T == F){
        printf("True");
    } else {
        printf("False");
    }
}

// Numeric Data types

void justInt (int x, int y){
    int z = x + y;
    printf("The answer in a form of int data type is %i\n", z);
}

void usingLong (long long x, long long y){
    long long z =x + y;
    printf("Size of long on this machine: %zu bytes\n", sizeof(long long));

    printf("The answer in a form of long data type is %lli\n", z);
}

void normalFloat(float x, float y){
    float z = x/y;
    printf("This float response would use the default precision -: %f\n", z);
}

void precisionFloat (double x, double y){
    double z = x/y;
    printf("This float response would use 20 numbers after decimal point -: %.20f\n", z);
}

// Non-Numeric Data Types
void oneChar (char x){
    printf("This function only takse one character, Thus the developer assigned %c\n", x);
}

void multiChar (char x[10], int n){
    // here in this function i will tell the compiler the number of space to allocate for x which is 10 characters
    // if the number of characters is more than the space allocated results in an error.
    while (n < strlen(x)){ // strlen is from the lib string.h and it counts the lenght of the string
        printf("Character number %i\n", x[n]);
        n++;
    }
    printf("The string %s, has %i number of characters\n", x, n);
}


