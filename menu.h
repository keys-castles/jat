// this header file should manage all user interaction with the program
// as well as handle printing the user's job applications as well as
// the main menu
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "job.h"
#ifndef MENU_H
#define MENU_H

// typedef struct interface {



// } interface;

void printMenu(){
    printf("    __     _      _____         _ _         _   _         \n");
    printf(" __|  |___| |_   |  _  |___ ___| |_|___ ___| |_|_|___ ___ \n");
    printf("|  |  | . | . |  |     | . | . | | |  _| .'|  _| | . |   |\n");
    printf("|_____|___|___|  |__|__|  _|  _|_|_|___|__,|_| |_|___|_|_|\n");
    printf("                       |_| |_|                            \n");
    printf(" _____             _                                      \n");
    printf("|_   _|___ ___ ___| |_ ___ ___                            \n");
    printf("  | | |  _| .'|  _| '_| -_|  _|                           \n");
    printf("  |_| |_| |__,|___|_,_|___|_|                             \n");
    printf("\n");

    // add buffer for the rest of the screen

    // need to add if statements or a switch case depending on the selected menu item...

    printf("                         VIEW\n");
    printf("                         ADD\n");
    printf("                         EXIT\n");

  

    
};


void handleInput(char* input, int* check){
    if (strcmp(input, "VIEW") == 0) {
        system("clear");
        viewApplications();
    }
    else if (strcmp(input, "ADD") == 0) {
        system("clear");
        // addApplication();
    }
    else if (strcmp(input, "EXIT") == 0) {
        system("clear");
        printMenu();
        *check = *(check) - 1;
    }
    else{
        printf("INVALID INPUT");
    }

};

#endif








