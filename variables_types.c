#include <stdio.h>

int main(void) {
    int age = 0;
    age = 23.9; //it is an int so the compiler will change it from float to int
    printf("%u\n", age);

    char j = 0;
    j += 1000; // exceed limit and wrong type, generates huge number
    printf("%u\n", j);

    // char j = 1000; -> will cause a compiler error, wrong type
}

/*
Integer types:
    char, mostly store letters from ASCII chart or integers from -128 to 127 
    int, at least 2 bytes
    short, at least 2 bytes
    long, at least 4 bytes
    -------
    All these types can unsigned (number start from 0)
    unsigned char = 0 -> +-255
    unsigned int = 0 -> +- 65,535
    unsigned short = 0 -> +- 65,535
    unsigned long = 0 -> +- 4,294,967,295

    If the number exceeds the limit it resets at 0
    If the value is not signed then the behavior is undefined, it can give huge numbers that vary
    C does not protect from going over the limits of a type, need to take care of it
*/