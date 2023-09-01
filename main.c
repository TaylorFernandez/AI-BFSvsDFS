#include <stdio.h>
#include <stdlib.h>
#include "ObjectHandlers/FileManager.h"

int main(){
    char *terminalInput = malloc(40 * sizeof(char));
    printf("Enter the name of a file: ");
    scanf("%s", terminalInput);

    FILE *openedFile = loadFile(terminalInput);
    return 0;
}