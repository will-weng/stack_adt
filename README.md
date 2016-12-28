# stack_adt

still incomplete

practice writing a stack adt that i can add to

functions that could be used


Stack newStack();  
void push(Stack s, int num);  
int pop(Stack s);  
void deleteStack(Stack s);  
void showStack(Stack s);  

interesting problem of memory leak when deleting stack, when passing the pointer into delete stack, cause c functions creates a copy, can't free original pointer in main function. gonna try and pass in pointer to actual stack pointer.  
29/12/16