#include <stdio.h>
#include <math.h>

#define pi 3.14
#define blog "PythonDSP"

int main(void) {
    const int radius = 2;
    float area;

    area = pi * pow(radius, 2);
    printf("Area of circle = %f\n", area);
    printf("Blog name: %s\n", blog);

    return 0;
}