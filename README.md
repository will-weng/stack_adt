# stack_adt

still incomplete

practice writing a stack adt that i can add to

functions that could be used

report bugs if you know any

Stack newStack();  
void push(Stack s, int num);  
int pop(Stack s);  
void deleteStack(Stack s);  
void showStack(Stack s);  
Stack copyStack(Stack s);

interesting problem of memory leak when deleting stack, when passing the pointer into delete stack, cause c functions creates a copy, can't free original pointer in main function. gonna try and pass in pointer to actual stack pointer.  
29/12/16

added copy Stack function, and revised previous bug with deleteStack, actually isn't a memory leak, it's just that the stack points to a deallocated memory and if used would become segfault
31/12/16
