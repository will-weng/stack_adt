// 
// stack.h header adt interface
// William Weng
// 28/12/16
//

// uses linked lists for stacking numbers

/*
push
pop
delete
new
show
*/

typedef struct _stackrep *Stack;

// returns an empty Stack
Stack newStack();
// push on top of stack
void push(Stack s, int num);
// pop off top of stack
int pop(Stack s);
// deletes stack (still buggy, stack points to delocated memory)
void deleteStack(Stack s);
// prints out the stack to see
void showStack(Stack s);
// creates a copy of the current stack
Stack copyStack(Stack s);