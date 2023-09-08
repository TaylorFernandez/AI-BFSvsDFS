//
// Created by Taylor Fernandez on 9/7/23.
//

#include <stdlib.h>
#include <assert.h>
#include "Queue.h"
#include "Node.h"


Queue_t *createNewQueue() {
    Queue_t *temp = malloc(sizeof(Queue_t));
    temp->size = 0;
    assert(temp != NULL);
    return temp;
}

void enqueue(Queue_t * queue, node_t * node){
    queueNode_t *temp = malloc(sizeof(queueNode_t));
    temp->data = node;
    temp->next = NULL;
    temp->prev = NULL;

    if(isQueueEmpty(queue)){
        queue->head = temp;
        queue->tail = temp;
    }else{
        if(queue->size == 1){
            queue->tail = temp;
            temp->next = queue->head;
            queue->head->prev = temp;
        }else {
            queueNode_t *oldTail = queue->tail;
            queue->tail = temp;
            temp->next = oldTail;
            oldTail->prev = queue->tail;
        }
    }
    queue->size++;

}
node_t* dequeue(Queue_t * queue){
    if(isQueueEmpty(queue)){
        return NULL;
    }

    queueNode_t *oldHead = queue->head;

    if(queue->size == 1){
        queue->head = NULL;
        queue->tail = NULL;
    }else {
        queue->head = oldHead->prev;
        assert(queue->head != NULL);
        queue->head->next = NULL;
    }

    queue->size--;
    node_t *temp = oldHead->data;
    free(oldHead);
    return temp;

}
int isQueueEmpty(Queue_t* queue){
    if(queue->size == 0){
        return TRUE;
    }
    return FALSE;
}

void freeQueue(Queue_t *queue){

}