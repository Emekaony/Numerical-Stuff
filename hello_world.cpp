#include <iostream>

int main(int argc, char* argv[]) {

    /*
    Get two integers from the user and spit their product!
    */

    int num1, num2;

    std::cout << "Write the first number: ";
    std::cin >> num1;

    std::cout << "Write the second number: ";
    std::cin >> num2;

    int prod = num1 * num2;
    std::cout << "The product of " << num1 << " and " << num2 << " is " << prod << "\n";

    return 0;
}