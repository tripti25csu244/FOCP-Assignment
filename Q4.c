#include <stdio.h>

void swap_temp(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Using temp variable: a=%d b=%d\n", a, b);
}

void swap_arithmetic(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Using arithmetic: a=%d b=%d\n", a, b);
}

void swap_xor(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Using XOR: a=%d b=%d\n", a, b);
}

void swap_pointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap_temp(a, b);
    swap_arithmetic(a, b);
    swap_xor(a, b);
    swap_pointers(&a, &b);
    printf("Using pointers: a=%d b=%d\n", a, b);

    return 0;
}
