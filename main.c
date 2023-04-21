#include <stdio.h>

int main(){
    int x, z;
    float y;

    x = 2;
    y = 2.7;
    z = x+y; // z == 4 not 4.7 because we said it's an int

    printf("z = %d\n", z);
}