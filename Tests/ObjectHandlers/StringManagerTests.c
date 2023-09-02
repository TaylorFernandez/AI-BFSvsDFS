//
// Created by Taylor Fernandez on 9/1/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StringManagerTests.h"
#include "../../ObjectHandlers/StringManager.h"

void testStringSplitting(){
    char *testString = malloc(100 * sizeof(char));
    strcpy(testString, "This,is,a,test");

    printf("%s\n", testString);

    char **result = splitString(testString);

    for(int i = 0; i < 4; i++){
        printf("%s\n", result[i]);
    }
}

void testCountValuesInArray(){
    printf("Testing counting values in string array\n");
    char **test = malloc(3  *sizeof(char));
    test[0] = "a";
    test[1] = "b";
    test[2] = "c";
    int count = countNumValuesInArray(test);
    printf("Number of values: %d\n", count);
    printf("Done testing counting values in string array\n");
}
