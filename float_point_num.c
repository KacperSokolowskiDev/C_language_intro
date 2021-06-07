#include <stdio.h>

// Floating point numbers represent much larger set of values than integers & fractions
// ex -> 1.29e-3
// Types : float, double, long double
/*
Floating point numbers types:
    float, from 10^-37 to 10^+37. represented using 32 bits -> has precision of 24 significant bits and 8 bits to encode the exponant
    double, even bigger, represented in 64 bits -> precision of 53 significant bits and 11 bits to encode the exponant
    long double, even bigger, respresented in 80 bits -> precision of 64 bits and 15 bits to encode the exponant
*/
int main(void) {
    printf("char size %lu bytes\n", sizeof(char)); //1 byte
    printf("int size %lu bytes\n", sizeof(int)); // 4 bytes
    printf("short size %lu bytes\n", sizeof(short)); // 2 bytes
    printf("long size %lu bytes\n", sizeof(long)); // 8 bytes
    printf("float size %lu bytes\n", sizeof(float)); // 4 bytes
    printf("double size %lu bytes\n", sizeof(double)); // 8 bytes
    printf("long double size %lu bytes\n", sizeof(long double)); // 16 bytes
}