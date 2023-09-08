//
// Created by Taylor Fernandez on 9/7/23.
//

#include <assert.h>
#include <stdio.h>
#include "StackTests.h"
#include "../../Code/Objects/Stack.h"

Stack_t *stack;

void testStackInit(){
    printf("Starting to test Stack Initialization\n");
    stack = createStack();

    assert(stack != NULL);
}

void testIsStackEmpty(){
    printf("Checking if the stack is empty\n");
    assert(isStackEmpty(stack) == 1);
}

void testPush(){
    printf("Testing push\n");
    node_t *node = createNewNode();
    node->numConnectedNodes = 0;
    node->nodeNumber = 5;

    push(stack, node);
}
void testPop(){
    printf("Testing pop\n");
    node_t *temp;
    temp = pop(stack);
    printf("Node Value (Test Pop): %d\n", temp->nodeNumber);
}
void testPushAndPop(){
    testPush();

    node_t *node2 = createNewNode();
    node2->numConnectedNodes = 0;
    node2->nodeNumber = 4;
    push(stack, node2);

    node_t *node3 = createNewNode();
    node3->numConnectedNodes = 0;
    node3->nodeNumber = 3;
    push(stack, node3);

    testPop();
    testPop();
    testPop();
}
void testFreeStack(){

}