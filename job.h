// this is where all the operations on job applications should occur,
// ideally we declare all functions here and use them in the menu.h file
// depending on what the user wants to do
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef JOB_H
#define JOB_H

FILE *file;
char buffer[256];
char* strip;

// WE NEED THIS STRUCT, holds the jobs in memory while they are printed out
// in the future: dynamically allocate space for the set amount of job structs we are going to
// use

// typedef struct job {
//     char jobTitle[20];
//     char companyTitle[20];
    

//     enum status {
//         APPLIED, 
//         INTERVIEWING,
//         WAITING,
//         OFFER,
//         REJECTED
//     } currStatus ;

//     int interviewStage;

// } Job;

void viewApplications(){
    // simply print all rows of the excel file [should limit to 10 per page?]
    // for now, simply print all rows

    file = fopen("jobs.csv", "r");

    if (file == NULL){
        printf("FILE NOT FOUND");
    }

    // we need to parse the rows, otherwise it will have commas and not be padded
    // parse using strtok?
    while (fgets(buffer, 250, file)){

        strip = strtok(buffer, ",");

        while (strip != NULL){
            printf("%s     ", strip);
            strip = strtok(NULL, ",");
        }

    }

    printf("\n");

}

void addApplication(char* title, char* company, char* status, char* interviewStatus){

    // open the file in append mode to simply append the job app at the end of the csv file
    file = fopen("jobs.csv", "a");

    if (file == NULL){
        printf("FILE NOT FOUND");
    }

    // add the content to the csv file; need a newline!
    fprintf(file, "\n");
    fprintf(file, "%s", title);
    fprintf(file, ",");
    fprintf(file, "%s", company);
    fprintf(file, ",");
    fprintf(file, "%s", status);
    fprintf(file, ",");
    fprintf(file, "%s", interviewStatus);


    fclose(file);
}

void editApplication(char* title, int field){
    // the user will input wich field to edit as well as the application we need to edit


}

// since the user can add more than one job of the same title, we need to have the user pass us the company
// for more accurate deletions
void removeApplication(char* title, char* company);



#endif

