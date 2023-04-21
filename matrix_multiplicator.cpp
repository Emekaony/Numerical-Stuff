#include <iostream>
#include <vector>

int main() {

    std::vector<int> base_vector{0, 0};

    std::vector<std::vector<int>> A{{1, 2}, {3, 4}};
    std::vector<std::vector<int>> B{{1, 2}, {3, 4}};
    std::vector<std::vector<int>> C(2, base_vector);
    std::vector<std::vector<int>> D{2, base_vector};

    // for (std::vector<int> x : C) {
    //     for (int k : x) {
    //         std::cout << k << "\n";
    //     }
    // }

    // matrix addition portion!
    for (int i = 0; i < A.size(); ++i) {
        // this tells us the row that we are on
        for (int j = 0; j < A[i].size(); ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (std::vector<int> x : C) {
        for (int elem : x) {
            std::cout << elem << "\n";
        }
    }
}