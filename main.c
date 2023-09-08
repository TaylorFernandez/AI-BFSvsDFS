#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Code/ObjectHandlers/FileManager.h"
#include "Tests/RunTests.h"
#include "Code/Objects/Network.h"
#include "Code/Algorithms/BFS.h"


/**
 * Program should prompt for file first and then load it.
 * Once loaded, program should prompt for the start and end node.
 * Any invalid input should force the program to exit without an error code or prompt the user for corrected input
 */

int main(){
    //Need to be free'd
    char *terminalInput = malloc(40 * sizeof(char));
    char *decision = malloc(4 * sizeof(char));
    char *t1 = malloc(sizeof(char) * 2);
    char *t2 = malloc(sizeof(char) * 2);
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

        printf("Which node do you want to start your search(1-%d): ", network->nodeCount-1);
        scanf("%s", t1);

        printf("Which node do you want to end your search(1-%d): ", network->nodeCount-1);
        scanf("%s", t2);

        printf("BFS Search Path: \n");

       bool temp = BFS(network, network->nodes[atoi(t1)-1], network->nodes[atoi(t2)-1]);

       if(temp){
           printf("Success!\n");
       }

    }
    return 0;
}