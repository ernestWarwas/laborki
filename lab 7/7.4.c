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

void try_push (struct stack *ptr_stack, int el){
    if(ptr_stack -> current_size < MAX_SIZE){
        push(ptr_stack, el);
    } else {
        printf("\nStack is overflow\n");
    }
}

void push (struct stack *ptr_stack, int element)
{
    ptr_stack -> array[ptr_stack -> current_size] = element;
    ptr_stack -> current_size++;
    display(ptr_stack);

}

void is_stack_empty(struct stack *ptr_stack){
    if(ptr_stack -> current_size == 0){
        printf("Stack is empty");
    }else{
        pop(ptr_stack);
    }
}

int pop (struct stack *ptr_stack)
{
    int element;
    element = ptr_stack -> array[ptr_stack -> current_size-1];
    ptr_stack -> current_size--;
    printf("\nRemoved element from stack: %d \n", element);
    display(ptr_stack);
    return element;
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

    try_push(ptr_stack, 3);
    try_push(ptr_stack, 5);
    try_push(ptr_stack, 7);

    pop(ptr_stack);

    clear(ptr_stack);

    is_stack_empty(ptr_stack);

return 0;
}
/*
    Doda�em funkcj�, kt�ra sprawdza czy stos nie jest przepe�niony przed wykonaniem funkcji push, kt�ra to robi i funkcj� kt�ra sprawdza czy
    stos jest pusty przed usuni�ciem elementu ze stosu. Mo�na by�o to zrobi� jeszcze inaczej, ale w tutaj zdecydowa�em si� na co� takiego, poniewa�
    wed�ug mnie w tym programie by�o to wydajniejsze. Drug� opcj� jest zwracanie stanu jaki jest w danym stosie czyli true albo false, w programie 7.5
    jest to zrobione w ten spos�b, �e funkcja zwraca stan w jakim jest stos.
*/
