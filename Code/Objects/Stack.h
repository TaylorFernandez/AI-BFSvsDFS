//
// Created by Taylor Fernandez on 9/7/23.
//

#ifndef AI_BFSVSDFS_STACK_H
#define AI_BFSVSDFS_STACK_H

#include "Node.h"

#define TRUE 1;
#define FALSE 0;

typedef struct stackNode_t{
    node_t *node;
    struct stackNode_t *next;
    struct stackNode_t *prev;
}stackNode_t;

typedef struct Stack_t{
    stackNode_t *curNode;
    int size;
}Stack_t;

Stack_t *createStack();
void push(Stack_t *, node_t *node);
node_t* pop (Stack_t *);
int isStackEmpty(Stack_t *);
void freeStack(Stack_t *);


#endif //AI_BFSVSDFS_STACK_H
