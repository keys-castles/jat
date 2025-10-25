#include <stdio.h>
#include "menu.h"
#include "job.h"

int main() {

    // for now, user input will be handled with scanf
    // look into better ways of implementing this later...
    // we should implement a queue to handle user input in order of input
    char input[20];
    int check = 1;

    printMenu();
// the while loop must stop while we wait for user input, could be a good way of staging menu changes?
    while (1) {
        scanf("%s", input);
        handleInput(input, &check);

        if (check < 0 ){
            break;
        }
    }

}