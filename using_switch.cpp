#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    
    int i = 5;

    switch (i) {
        case 5:
            std::cout << "i is 5\n";
            break;
        case 20:
            std::cout << "This might print too\n";
            break;
    }

    if (fabs(5.00000001-5.0000000001) < 1.0e-8) {
        cout << "something";
    }

}