#include <iostream>
#include <vector>
#include <math.h>

int main() {

    std::vector<int> v1{1, 2, 3};
    std::vector<int> v2{4, 5, 6};

    float d_squared = 0;
    float answer = -1;

    for (int i = 0; i < v1.size(); ++i) {
        d_squared += pow(v1[i]-v2[i], 2);
    }

    answer = sqrt(d_squared);
    std::cout << "The Euclidean norm is: " << answer << "\n";

    return 0;
}