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

Stack newStack();
void push(Stack s, int num);
int pop(Stack s);
void deleteStack(Stack s);
void showStack(Stack s);