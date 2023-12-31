#include <stdio.h>
#include <string.h>
typedef unsigned char* byte_pointer;

void show_byte(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) { show_byte((byte_pointer)&x, sizeof(int)); }

int main() {
    const char * s = "abcdef";
    show_byte((byte_pointer)s, strlen(s));
}
