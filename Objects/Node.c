//
// Created by Taylor Fernandez on 9/1/23.
//

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

/**
 * Creates a new node
 * @return pointer to a node
 */
node_t* createNewNode(){
    node_t* newNode;

    newNode = malloc(sizeof(node_t));
    return newNode;
}

/**
 * Loads a node with provided values
 * @param node node being loaded with data
 * @param nodeValue nodes number
 * @param connectedNodes nodes connected to the current node
 */
void loadNode(node_t* node, int nodeValue, int* connectedNodes){
    node_t* curNode = node;

    node->nodeNumber = nodeValue;
    curNode->connectedNodes = connectedNodes;
}

/**
 * Prints the node provided
 * @param curNode current node being printed
 */
void printNode(node_t* curNode){
    printf("Node: %d\nNumber of connected nodes: %d\n", curNode->nodeNumber, curNode->numConnectedNodes);
    printf("[");
    for(int i = 0; i < curNode->numConnectedNodes-1; i++){
        printf("%d, ", curNode->connectedNodes[i]);
    }
    printf("%d]\n", curNode->connectedNodes[curNode->numConnectedNodes-1]);
}