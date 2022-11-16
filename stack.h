//
// Created by inhatc on 2022-11-09.
//

#ifndef UNTITLED1_STACK_H
#define UNTITLED1_STACK_H

#define STACK_SIZE 100

typedef int element;
element stack[STACK_SIZE];

int isStackEmpty();
int isStackFull();
void push(element item);
element pop();
element peek();
void printStack();

#endif //UNTITLED1_STACK_H
