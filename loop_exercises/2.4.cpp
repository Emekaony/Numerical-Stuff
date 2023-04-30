#include <iostream>
#include <stdio.h>


int main() {
    double u[3] = {1, 2, 3};
    double v[3] = {6, 5, 4};
    double A[3][3] = {{1.0, 5.0, 0.0},
                      {7.0, 1.0, 2.0},
                      {0.0, 0.0, 1.0}};
    double B[3][3] = {{-2.0, 0.0, 0.0},
                      {1.0, 0.0, 0.0},
                      {4.0, 1.0, 0.0}};

    double w[3];
    for (int i = 0; i < 3; ++i) {
        w[i] = u[i] - 3.0*v[i];
    }

    double x[3];            // u - v
    double y[3][1];         // Au
    double C[3][3];         // 4A - 3B
    double D[3][3];         // AB

    for (int i = 0; i < 3; ++i) {
        x[i] = u[i] - v[i];
    }

    // for (int i = 0; i < 3; i++) {
    //     printf("x[%d] == %f\n", i, x[i]);
    // }

    return 0;
}
