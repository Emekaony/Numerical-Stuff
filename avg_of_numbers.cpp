#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums{34, 58, 57, 32, 43};
    int sum = 0;
    for (int elem : nums) {
        sum += elem;
    }
    float avg = float(sum) / nums.size();
    std::cout << "The average of these numbers is: " << avg << "\n";

    return 0;
}