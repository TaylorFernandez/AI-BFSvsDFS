//
// Created by Taylor Fernandez on 9/1/23.
//

#include "FileManager.h"
#include <stdio.h>
#include <assert.h>

FILE* loadFile(char *fileName){
    FILE* inputFile = fopen(fileName, "r");
    assert(inputFile != NULL);

    return inputFile;
}
