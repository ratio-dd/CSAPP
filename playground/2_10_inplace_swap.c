// inplace swap
#include <stdio.h>

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt - 1; first <= last; first++, last--) {
        if (first == last) break;
        inplace_swap(&a[first], &a[last]);
    }
}

int main() {
    // int x = 5;
    // int y = 3;
    // printf("x = %d,y = %d\n", x, y);
    // inplace_swap(&x, &y);
    // printf("x = %d,y = %d\n", x, y);

    int a[] = {1, 2, 3, 4};
    int b[] = {1, 2, 3, 4, 5};
    int len_a = sizeof(a) / sizeof(a[0]);
    int len_b = sizeof(b) / sizeof(b[0]);
    reverse_array(a, len_a);
    reverse_array(b, len_b);

    printf("a = ");
    for (int i = 0; i < len_a; i++) {
        printf("%d ", a[i]);
    }
    printf("\nb = ");
    for (int i = 0; i < len_b; i++) {
        printf("%d ", b[i]);
    }
}