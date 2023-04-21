#include <stdio.h>

int main() {
    // enumerated dtype stateReg
    enum stateReg {
        Win, Loose
        // do not forget the semi-colon after enums
    };

    // still gotta use enum here cause it is an enum type!
    enum stateReg currentState;
    int dice = 6;

    if (dice == 6) {
        currentState = Win;
    } else {
        currentState = Loose;
    }

    if (currentState == Win) {
        printf("You won the game...");
    } else {
        printf("You loose the game...");
    }

    return 0;
}