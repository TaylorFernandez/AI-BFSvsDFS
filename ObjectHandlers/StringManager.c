//
// Created by Taylor Fernandez on 9/1/23.
//

#include <string.h>
#include <stdlib.h>
#include "StringManager.h"

/**
 * Splits the string "buffer" into a list of words, separated by a space
 * NOTE: STRING MUST BE MALLOCED FOR FUNCTION TO WORK
 * @param buffer - String input from main or file
 * @return array containing strings
 */
char** splitString(char *buffer){
    int i = 0;
    char *split = strtok(buffer, ",");
    char **array = malloc(15 * sizeof(char *));
    /**
     * uses the strtok function to parse the string into
     * a list of words
     */
    while (split != NULL) {
        array[i++] = split;
        split = strtok(NULL, ",");
    }


    return array;
}

int countNumValuesInArray(char **array){
    int count = 0;
    int i = 0;
    while(array[i] != NULL){
        count++;
        i++;
    }

    return count;
}