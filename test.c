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
    assert(s == NULL);

    printf("\n=====     TESTING PUSH AND POP    ======\n");

    push(s, 10);
    push(s, 20);
    printf("returning %d\n", pop(s));
    assert(pop(s) == 20);
    push(s, 0);
    assert(pop(s) == 0);
    assert(pop(s) == 10);
    push(s, -100);
    push(s, 20);
    assert(pop(s) == 20);    
    assert(pop(s) == -100);

    printf("\n=====     TESTING DELETE     ======\n");

    deleteStack(s);

    printf("\n=====     TESTING SHOW     ======\n");

    printf("\n======     ALL TESTS PASS CONGRATES     ======\n\n");

    return EXIT_SUCCESS;
}