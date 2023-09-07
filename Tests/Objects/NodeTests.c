//
// Created by Taylor Fernandez on 9/1/23.
//
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../Code/Objects/Node.h"

node_t* testNode;

void testNodeInit(){
    printf("Testing Node Initialization\n");
    testNode = createNewNode();
    assert(testNode != NULL);
    printf("Finished Node Testing\n");
}

void testNodeFill(){
    printf("Testing Filling Node\n");

    int* testArr = malloc(4 * sizeof(int));
    for(int i = 0; i < 4; i++){
        testArr[i] = i;
    }

    testNode->nodeNumber = 1;
    testNode->connectedNodes = testArr;
    testNode->numConnectedNodes = 4;

    assert(testNode->nodeNumber == 1);
    assert(testNode->numConnectedNodes == 4);

    printf("Finished Filling Node\n");
}

void testPrintNode(){
    printf("Testing Printing Node");
    printNode(testNode);
    printf("Finished Testing Node Printing");
}

void testFreeNode(){
    freeNode(testNode);
}