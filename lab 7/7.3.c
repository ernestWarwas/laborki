#include <stdlib.h>
#include <stdio.h>
#include <Math.h>
#include <ctype.h>
#define MAX_SIZE 5



typedef struct stack
{
    int array[5];
    int current_size;
};

void init (struct stack *ptr_stack)
{

  ptr_stack -> current_size = 0;

}

void push (struct stack *ptr_stack, int element)
{

    if(ptr_stack -> current_size < MAX_SIZE)
    {
        ptr_stack -> array[ptr_stack -> current_size] = element;
        ptr_stack -> current_size++;
    }else
    {
        printf("\nStack is overflow\n");
    }

    display(ptr_stack);

}

int pop (struct stack *ptr_stack)
{
    int element;

    if(ptr_stack -> current_size == 0)
    {
        printf("Stack is empty");
        return NULL;
    }else
    {
    element = ptr_stack -> array[ptr_stack -> current_size-1];
    ptr_stack -> current_size--;
    printf("\nRemoved element from stack: %d \n", element);
    display(ptr_stack);
    return element;
    }

}

void display(struct stack *ptr_stack)
{
    int i;

    printf("\n == DISPLAY STACK == \n");

    for(i=ptr_stack -> current_size-1; i>=0; i--)
    {
        printf("%d\n", ptr_stack -> array[i]);
    }
}

int clear(struct stack *ptr_stack)
{
    ptr_stack -> current_size = 0;
}

int main(){

    struct stack *ptr_stack, stack1;
    ptr_stack = &stack1;

    init(ptr_stack);

    push(ptr_stack, 3);
    push(ptr_stack, 5);
    push(ptr_stack, 7);

    pop(ptr_stack);

    clear(ptr_stack);

    pop(ptr_stack);

return 0;
}
