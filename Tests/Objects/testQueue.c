//
// Created by Taylor Fernandez on 9/7/23.
//

#include <assert.h>
#include "testQueue.h"
#include <stdio.h>
#include "../../Code/Objects/Queue.h"

Queue_t *queue;

void testQueueInit(){
    printf("Testing Queue Initialization\n");
    queue = createNewQueue();
    assert(queue != NULL);
}
void testEnqueueAndDequeue(){
    printf("Testing Enqueue and Dequeue\n");

    node_t *n1 = createNewNode();
    n1->nodeNumber = 5;
    node_t *n2 = createNewNode();
    n2->nodeNumber = 4;
    node_t *n3 = createNewNode();
    n3->nodeNumber = 3;

    enqueue(queue, n1);
    enqueue(queue, n2);
    enqueue(queue, n3);

    printf("Dequeue: %d\n", dequeue(queue)->nodeNumber);
    printf("Dequeue: %d\n", dequeue(queue)->nodeNumber);
    printf("Dequeue: %d\n", dequeue(queue)->nodeNumber);
}
void testFreeQueue(){

}
void testIsQueueEmpty(){
    assert(isQueueEmpty(queue) == TRUE);
}
