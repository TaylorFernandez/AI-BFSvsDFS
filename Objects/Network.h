//
// Created by Taylor Fernandez on 9/1/23.
//

#ifndef AI_BFSVSDFS_NETWORK_H
#define AI_BFSVSDFS_NETWORK_H

#include "Node.h"

typedef struct network_t{
    struct node_t* nodes;
    int nodeCount;
}network_t;

node_t* createNewNetwork();

node_t* loadNetwork();

#endif //AI_BFSVSDFS_NETWORK_H
