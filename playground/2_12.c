/* bit opertion practice*/

#include <stdio.h>

int main() {
    long x = 0xA987654321;
    printf("x = 0x%lx \n", x);
    // quiz A
    printf("x & 0xFF = 0x%lx \n", x & 0xFF);
    // quiz B
    printf("x & 0xFF = 0x%lx \n", x & 0xFF);
    printf("x ^ 0xFF = 0x%lx \n", x ^ 0xFF);
    printf("~0xFF = 0x%x \n", ~0xFF);
    printf("x ^~ 0xFF = 0x%lx \n", x ^ ~0xFF);
    // quiz C
    printf("x | 0xFF = 0x%lx \n", x | 0xFF);
}