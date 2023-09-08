//
// Created by Taylor Fernandez on 9/7/23.
//

#ifndef AI_BFSVSDFS_QUEUE_H
#define AI_BFSVSDFS_QUEUE_H
#define TRUE 1
#define FALSE 0

#include "Node.h"

typedef struct queueNode_t{
    node_t *data;
    struct queueNode_t* next;
    struct queueNode_t* prev;
}queueNode_t;

typedef struct Queue_t{
    queueNode_t *head;
    queueNode_t *tail;
    int size;
}Queue_t;

Queue_t *createNewQueue();
void enqueue(Queue_t *, node_t *);
node_t* dequeue(Queue_t *);
int isQueueEmpty(Queue_t*);
void freeQueue(Queue_t*);


#endif //AI_BFSVSDFS_QUEUE_H
