//
// Created by Taylor Fernandez on 9/1/23.
//

#include <stdio.h>
#include <stdlib.h>
#include "Network.h"
#include "../ObjectHandlers/FileManager.h"
#include "../ObjectHandlers/StringManager.h"

network_t* createNewNetwork(){
    network_t *newNetwork = malloc(sizeof(network_t));
    return newNetwork;
}

void loadNetwork(network_t *network, FILE *file){

    int numNodes = getNumLinesInFile(file);
    network->nodeCount = numNodes;
    node_t **nodes = malloc(numNodes * sizeof(node_t));

    //Gets rid of the first line of the file. Not useful
    char buffer[100];
    fscanf(file, "%s", buffer);


    for(int i = 0; i < network->nodeCount-1; i++){
        fscanf(file, "%s", buffer);  //buffer should now have the current line in the buffer

        char **splitArray = splitString(buffer);
        int numValuesInArray = countNumValuesInArray(splitArray);

        int *connectedNodes = malloc((numValuesInArray-1) * sizeof(int));

        /**
         * output is incorrect; incorrect values in array per node. Causes segfault when creating a node
         */
        for(int j = 1; j < numValuesInArray; j++){
            connectedNodes[j-1] = atoi(splitArray[j]);
        }

        for(int f = 0; f < numValuesInArray-1; f++){
            printf("%d: connectedNode: %d\n",i+1, connectedNodes[f]);
        }

        node_t *node = createNewNode();
        loadNode(node, atoi(splitArray[0]), connectedNodes, numValuesInArray-1 );

        nodes[i] = node;

    }
    network->nodes = nodes;
    fclose(file);
}

void printNetwork(network_t *network){
    printf("Num nodes: %d\n", network->nodeCount);
    for(int i = 0; i < network->nodeCount-1; i++){
        printNode(network->nodes[i]);
    }
}

void freeNetwork(network_t *network){
    for(int i = 0; i < network->nodeCount-1; i++){
        freeNode(network->nodes[i]);
    }

    free(network);
}