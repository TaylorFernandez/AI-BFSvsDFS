#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "../Objects/Node.h"
#include "../Objects/Queue.h"
#include "../Objects/Stack.h"
#include "../Objects/Network.h"

void printArray(int *arr, int length){
    printf("Array for current node: \n");
    for(int i =0; i < length-1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d\n", arr[length-1]);
}

// Function to perform BFS and detect loops
bool BFS(network_t* network, node_t* start, node_t* target) {
    //Create a queue to store the path
    Queue_t *queue = createNewQueue();

    //Create a list of booleans to determine whether a node has been visited
    bool visited[network->nodeCount];
    for(int i = 0; i < network->nodeCount; i++){
        visited[i] = FALSE;
    }

    //Add the starting node to the list of visited
    visited[start->nodeNumber-1] = TRUE;
    enqueue(queue, start);

    while(!isQueueEmpty(queue)){
        node_t *currentNode = dequeue(queue);
        printNode(currentNode);

        int *connectedNodes = network->nodes[currentNode->nodeNumber]->connectedNodes;
        printArray(connectedNodes, currentNode->numConnectedNodes);
        int temp = 0;

        if(currentNode->nodeNumber == target->nodeNumber){
            printf("Found a path!");
            return true;
        }

        while(temp < currentNode->numConnectedNodes){
           currentNode = network->nodes[connectedNodes[temp]];
           if(!visited[currentNode->nodeNumber]){
               visited[currentNode->nodeNumber] = TRUE;
               enqueue(queue, currentNode);
           }
           temp++;
        }
    }
    return FALSE;
}

