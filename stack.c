// 
// a personal stack for practice stack.c
// William Weng
// 28/12/16
//

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

typedef struct _node *Node;

typedef struct _node {
    int val;
    Node next;
} node;

static Node newNode(int num);

Stack newStack() {
    Stack s = malloc(sizeof(Stack));
    s = NULL;
    return s;
}

void push(Stack s, int num) {
    
    Node n = newNode(num);
    n->next = s;
    s = n;
}

int pop(Stack s) {
    if(s == NULL) {
        printf("Invalid stack\n");
        return 0;
    }

    Node del = s;
    int val = del->val;
    if(s->next == NULL) {
        s = NULL;
    } else {
        s = s->next;
    }
    free(del);
    return val;
}

void deleteStack(Stack s) {
/*
    if(s == NULL) {
        printf("Invalid stack\n");
        return;
    }

    if(s->front != NULL) {
        Node del = s->front;
        Node next = del->next;
        for(; del != NULL; del = next, next = next->next)
            free(del);
    }

    free(s);
    */
}

void showStack(Stack s) {

}

static Node newNode(int num) {
    Node n = malloc(sizeof(node));
    n->val = num;
    n->next = NULL;
    return n;
} 