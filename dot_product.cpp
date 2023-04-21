#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {

    std::vector<int> v1{10, 20, 30};
    std::vector<int> v2{-2, 3, 9};

    int scalar_product = 0;

    // get the dot product 
    for (int i = 0; i < v1.size(); ++i) {
        scalar_product += v1[i]*v2[i];
    }

    std::cout << "The scalar product is " << scalar_product << "\n";

    return 0;
}