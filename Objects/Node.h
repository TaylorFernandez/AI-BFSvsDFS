//
// Created by Taylor Fernandez on 9/1/23.
//

#ifndef AI_BFSVSDFS_NODE_H
#define AI_BFSVSDFS_NODE_H

typedef struct node_t{
    int nodeNumber;
    int* connectedNodes;
    int numConnectedNodes;
}node_t;

node_t* createNewNode();

void loadNode(node_t* node, int nodeValues, int* connectedNodes);

void printNode(node_t* node);



#endif //AI_BFSVSDFS_NODE_H
