// 
// test file for personal stack
// William Weng
// 28/12/16
//


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"

int main(int argc, char *argv[]) {
    
    printf("\n=====     TESTING NEWSTACK     ======\n");
    Stack s = newStack();
    assert(s != NULL);
    deleteStack(s);

    printf("\n=====     TESTING PUSH AND POP    ======\n");

    s = newStack();
    // random push and pops
    push(s, 10);
    push(s, 20);
    assert(pop(s) == 20);
    push(s, 0);
    assert(pop(s) == 0);
    assert(pop(s) == 10);
    push(s, -100);
    push(s, 20);
    assert(pop(s) == 20);    
    assert(pop(s) == -100);
    // pop from empty
    assert(pop(s) == 0);

    printf("\n=====     TESTING DELETE     ======\n");

    push(s,10);
    deleteStack(s);
    // s = NULL; memory leak problem worked around using this.
    printf("poped off %d\n", pop(s));

    assert(s == NULL);

    push(s,10);


    printf("\n=====     TESTING SHOW     ======\n");
    showStack(s);

    printf("\n======     ALL TESTS PASS CONGRATES     ======\n\n");

    return EXIT_SUCCESS;
}