#include <iostream>

int main(int argc, char* argv[]) {

    // difference between logical and relational operators
    int vec1[4] = {1, 2, 3, 4};
    int vec2[4] = {5, 6, 7, 8};
    int scalar_product = 0;
    for (int i = 0; i < 4; i++) {
        scalar_product += vec1[i]*vec2[i];
    }

    std::cout << "Scalar product is " << scalar_product << "\n";

    double x = -2.0;

    if (x < 0.0) {
        x = 0.0;
    }

    std::cout << "x is now " << x << "\n";


    return 0;
}