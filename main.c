#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Code/ObjectHandlers/FileManager.h"
#include "Tests/RunTests.h"
#include "Code/Objects/Network.h"


/**
 * Program should prompt for file first and then load it.
 * Once loaded, program should prompt for the start and end node.
 * Any invalid input should force the program to exit without an error code or prompt the user for corrected input
 */

int main(){
    //Need to be free'd
    char *terminalInput = malloc(40 * sizeof(char));
    char *decision = malloc(4 * sizeof(char));
    int *startingNode = 0;
    int *endingNode = 0;

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
        network_t *network = createNewNetwork();
        loadNetwork(network, openedFile);

        printf("Which node do you want to start your search(1-%d: ", network->nodeCount);
        scanf("%d", startingNode);

        printf("Which node do you want to end your search(1-%d: ", network->nodeCount);
        scanf("%d", endingNode);

    }
    return 0;
}