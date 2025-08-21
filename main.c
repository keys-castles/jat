#include <stdio.h>
#include "menu.h"
#include "job.h"

int main() {

    // for now, user input will be handled with scanf
    // look into better ways of implementing this later...
    char input[20];
    int opcode = 1;

// the while loop must stop while we wait for user input, could be a good way of staging menu changes?
    while (opcode > 0) {
        printMenu(opcode);
        scanf("%s", input);
        opcode = handleInput(input);
    }

}