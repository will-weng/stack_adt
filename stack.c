// 
// a personal stack for practice stack.c
// William Weng
// 28/12/16
//

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define FAIL 0;

typedef struct _node *Node;

typedef struct _node {
    int val;
    Node next;
} node;

typedef struct _stackrep {
    Node head;
} stackrep;

static Node newNode(int num);
static void clearNode(Node n);

Stack newStack() {
    Stack s = malloc(sizeof(stackrep));
    s->head = NULL;
    return s;
}

void push(Stack s, int num) {
    if(s == NULL) {
        printf("Invalid stack\n");
        return;
    }

    Node n = newNode(num);
    // n->val = num; wtf is this u dumb mf
    n->next = s->head;
    s->head = n;
}

int pop(Stack s) {
    if(s == NULL) {
        printf("Invalid stack\n");
        return FAIL;
    } else if (s->head == NULL) {
        printf("Can't pop from empty stack\n");
        return FAIL;
    }

    Node del = s->head;
    int val = del->val;
    if(del->next == NULL) {
        s->head = NULL;
    } else {
        s->head = del->next;
    }

    clearNode(del);

    return val;
}

void deleteStack(Stack s) {
    if(s == NULL) {
        printf("Invalid stack\n");
        return;
    }

    Node del;
    while(s->head != NULL) {
        del = s->head;
        s->head = del->next;
        clearNode(del);
    }

    free(s);
    s->head = NULL;
    s = NULL;
}

void showStack(Stack s) {
    if(s == NULL) {
        printf("Invalid stack\n");
        return;
    } else if(s->head == NULL) {
        printf("Empty stack\n");
        return;
    }

    printf("Stack contains:\n");
    Node print = s->head;
    while(print != NULL) {
        printf("[%d]\n", print->val);
        print = print->next;
    }
}

static Node newNode(int num) {
    Node n = malloc(sizeof(node));
    n->val = num;
    n->next = NULL;
    return n;
}

static void clearNode(Node n) {
    free(n);
    n->val = 0;
    n->next = NULL;
    n = NULL;
}


Stack copyStack(Stack s) {

    if(s == NULL) {
        printf("Invalid stack\n");
        return NULL;
    }

    Stack copy = newStack();
    Node curr = s->head;
    if(curr != NULL) {
        Node nCopy = newNode(curr->val);
        copy->head = nCopy;
        while(curr->next != NULL) {
            curr = curr->next;
            nCopy->next = newNode(curr->val);
            nCopy = nCopy->next;
        }
    } else {
        copy->head = s->head;
    }

    return copy;
}