#include <math.h>
#include <stdio.h>

long converFromDecimalToBinary(int decimal) {
    int temp = 1, rem;
    long binary = 0;
    while (decimal != 0) {
        rem = decimal % 2;
        decimal /= 2;
        binary += rem * temp;
        temp *= 10;
    }
    return binary;
}
int main(int argc, char const *argv[]) {
    int x = 0b01100010;
    long y = x<<3;
    long z = x%8;
    printf("%d\n%d\n%d", 
        converFromDecimalToBinary(x),
        converFromDecimalToBinary(y),
        converFromDecimalToBinary(z));
    return 0;
}
