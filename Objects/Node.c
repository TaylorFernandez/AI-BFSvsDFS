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
    assert(newNode == NULL);

    newNode = malloc(sizeof(node_t));
    assert(newNode != NULL);
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
    assert(curNode != NULL);

    node->nodeNumber = nodeValue;
    curNode->connectedNodes = connectedNodes;
}
