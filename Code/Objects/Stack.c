//
// Created by Taylor Fernandez on 9/7/23.
//

#include <stdlib.h>
#include <assert.h>
#include "Stack.h"

Stack_t *createStack(){
    Stack_t *stack = malloc(sizeof(stack_t));
    stack->size = 0;
    assert(stack != NULL);

    return stack;
}

int isStackEmpty(Stack_t *stack){
    if(stack->size == 0){
        return TRUE;
    }

    return FALSE;
}

void push(Stack_t *stack, node_t *node){
    stackNode_t *temp = malloc(sizeof(stackNode_t));
    temp->node = node;

    if(isStackEmpty(stack)){
        stack->curNode = temp;
        temp->prev = NULL;
        stack->size++;
    }else{
        stack->curNode->next = temp;
        temp->prev = stack->curNode;
        stack->curNode = temp;
        stack->size++;
    }
}

node_t* pop(Stack_t *stack){
    if(isStackEmpty(stack)){
        return NULL;
    }

    stackNode_t *temp = stack->curNode;
    node_t *tempNode = temp->node;

    if(temp->prev != NULL) {
        stack->curNode = temp->prev;
        stack->curNode->next = NULL;
    }else{
        stack->curNode = NULL;
    }

    free(temp);

    return tempNode;

}

void freeStack(Stack_t *stack){

}
