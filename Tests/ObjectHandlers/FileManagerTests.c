//
// Created by Taylor Fernandez on 9/1/23.
//

#include <assert.h>
#include "FileManagerTests.h"
#include "../../Code/ObjectHandlers/FileManager.h"

FILE* file;

void testLoadFile(char *fileName){
    printf("Testing loading file\n");
    file = loadFile(fileName);
    assert(file != NULL);
    printf("Done loading file\n");
}

void testCountLines(){
    printf("Testing counting lines: Result should be 5\n");
    int numLines = getNumLinesInFile(file);
    //assert(numLines == 5);
    printf("Num Lines: %d\n", numLines);
    printf("Done testing counting lines\n");
}