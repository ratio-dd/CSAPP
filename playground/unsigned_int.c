/* Test signed and unsigned in C*/

#include <stdio.h>

int abs(int x){
    if( x <0){
        return -x;
    }else{
        return x;
    }
}
int main() {
    // signed
    int t = (int)2147483648;

    // unsigned
    unsigned u = -2147483648;

    printf("signed:    t = %d, = %u.\n",t,t);
    printf("unsigned:  u = %d, = %u.\n",u,u);
    printf("abs:\t%d,%u",abs(u));
}
