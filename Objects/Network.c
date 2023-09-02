//
// Created by Taylor Fernandez on 9/1/23.
//

#include <stdio.h>
#include <stdlib.h>
#include "Network.h"
#include "/Users/taylorfernandez/Desktop/AI-BFSvsDFS/ObjectHandlers/FileManager.h"
#include "../ObjectHandlers/StringManager.h"

network_t* createNewNetwork(){
    network_t *newNetwork = malloc(sizeof(network_t));
    return newNetwork;
}

void loadNetwork(network_t *network, FILE *file){
    printf("Testing Loading the Network:\n");
    int numNodes = getNumLinesInFile(file);
    network->nodeCount = numNodes;
    network->nodes = malloc(numNodes * sizeof(node_t));

    //Gets rid of the first line of the file. Not useful
    char buffer[100];
    fscanf(file, "%s", buffer);

    for(int i = 0; i < network->nodeCount; i++){
        fscanf(file, "%s", buffer);  //buffer should now have the current line in the buffer

        char **splitArray = splitString(buffer);
        int numValuesInArray = countNumValuesInArray(splitArray);

        int *connectedNodes = malloc((numValuesInArray-1) * sizeof(int));

        /**
         * output is incorrect; incorrect values in array per node. Causes segfault when creating a node
         */
//        for(int j = 1; j < numValuesInArray; j++){
//            connectedNodes[j-1] = atoi(splitArray[i]);
//        }
//
//        for(int f = 0; f < 3; f++){
//            printf("%d: connectedNode: %d\n",i, connectedNodes[f]);
//        }

        node_t *node = createNewNode();
        loadNode(node, atoi(splitArray[0]), connectedNodes );

        network->nodes[i] = node;
    }
    fclose(file);
}

void printNetwork(network_t *network){
    printf("Num nodes: %d\n", network->nodeCount);
    for(int i = 0; i < network->nodeCount; i++){
        printNode(network->nodes[i]);
    }
}