//
// Created by Taylor Fernandez on 9/1/23.
//

#ifndef AI_BFSVSDFS_NETWORK_H
#define AI_BFSVSDFS_NETWORK_H

#include "Node.h"

typedef struct network_t{
    struct node_t** nodes;
    int nodeCount;
}network_t;

network_t* createNewNetwork();

void loadNetwork(network_t *, FILE *);

void printNetwork(network_t *);

void freeNetwork(network_t *);

#endif //AI_BFSVSDFS_NETWORK_H
