#include <iostream>

// TODO: Make sure only integers are put into the function

int main() {
    int sum = 0;
    int num = 0;

    std::cout << "Enter a bunch of numbers you would like to sum up\n";
    for (;;) {
        // get the number from command line
        std::cin >> num;
        if ((sum > 100) || (num == -1)) {
            break;
        }

        if (num == -2) {
            sum = 0;
        } else {
            sum += num;
        }
    }
    std::cout << "The sum is " << sum << "\n";
}