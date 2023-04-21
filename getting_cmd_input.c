#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a == %d\n", *a);
    printf("b == %d\n", *b);
}

int main(void) {

    // float num;
    // printf("Enter a float number ");
    // scanf("%f", &num);

    // printf("Float num is %f", num);
    int a = 40;
    int b = 21;

    printf("before swapping: a == %d\n", a);
    printf("before swapping: b == %d\n", b);

    swap(&a, &b);

    printf("after swapping: a == %d\n", a);
    printf("after swapping: b == %d\n", b);

    return 0;
}