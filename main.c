#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ObjectHandlers/FileManager.h"
#include "/Users/taylorfernandez/Desktop/AI-BFSvsDFS/Tests/RunTests.h"


/**
 * Program should prompt for file first and then load it.
 * Once loaded, program should prompt for the start and end node.
 * Any invalid input should force the program to exit without an error code or prompt the user for corrected input
 */

int main(){
    char *terminalInput = malloc(40 * sizeof(char));
    char *decision = malloc(4 * sizeof(char));

    printf("Do you want to run tests? (Y/N)");
    scanf("%s", decision);

    if(strcmp(decision, "Y") == 0 || strcmp(decision, "Yes") == 0 ||
        strcmp(decision, "YES") == 0 || strcmp(decision, "yes") == 0){

        printf("Running Tests\n");

        RunAllTests();
    }else {

        printf("Enter the name of a file: ");
        scanf("%s", terminalInput);

        FILE *openedFile = loadFile(terminalInput);
        while(openedFile == NULL){
            printf("Could not open file: %s\nPlease correct the file name/path: ", terminalInput);
            scanf("%s", terminalInput);
            openedFile = loadFile(terminalInput);
        }
    }
    return 0;
}