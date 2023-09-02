//
// Created by Taylor Fernandez on 9/1/23.
//

#include "FileManager.h"
#include <stdio.h>
#include <assert.h>

FILE* loadFile(char *fileName){
    FILE* inputFile = fopen(fileName, "r");
    return inputFile;
}

int getNumLinesInFile(FILE* fp){
    char buf[100];
    int count = 0;
    while(fscanf(fp, "%s", buf) == 1){
        count++;
    }
    rewind(fp);
    return count;

}
