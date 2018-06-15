#include <stdlib.h>
#include <stdio.h>
#include <Math.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX_SIZE 5



typedef struct stack
{
    int array[5];
    int current_size;
};

typedef FILE* file;

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

int is_stack_empty(struct stack *ptr_stack){
    bool empty = false;
    if(ptr_stack -> current_size == 0){
        return empty = true;
    }
    return false;
}

int pop (struct stack *ptr_stack)
{
    int element;
    element = ptr_stack -> array[ptr_stack -> current_size-1];
    ptr_stack -> current_size--;
    printf("\nRemoved element from stack: %d \n", element);
    return element;
}

void display(struct stack *ptr_stack)
{
    int i;

    printf("\n == DISPLAY STACK == \n");

    for(i=ptr_stack -> current_size-1; i>=0; i--)
    {
        if(!is_stack_empty(ptr_stack)){
            printf("%d\n", ptr_stack -> array[i]);
        } else {
            printf("\nStack is empty");
        }
    }
}

void clear_stack(struct stack *ptr_stack){
    for(int i=0; is_stack_empty(ptr_stack) == false; i++){
        if(!is_stack_empty(ptr_stack)){
            pop(ptr_stack);
        }else{
            clear(ptr_stack);
        }
    }
}

int clear(struct stack *ptr_stack)
{
    ptr_stack -> current_size = 0;
}

void save_stack_to_file(struct stack *ptr_stack, file fp){
    if(fp = fopen("stack.txt", "wb")){
        for(int i=ptr_stack -> current_size-1; i>=0; i--){
            if(!is_stack_empty(ptr_stack)){
                fprintf(fp, "\x0D\x0A%d", ptr_stack -> array[i]);
            } else {
                printf("\nStack is empty");
            }
        }
    }
    fclose(fp);
}

void read_stack_from_file(struct stack *ptr_stack, file fp){
    int nb;
    fp = open("stack.txt", "r");
    while (!feof (fp)){
        printf ("%d ", nb);
        fscanf (fp, "%d", &nb);
        try_push(ptr_stack, nb);
    }
    fclose(fp);
    display(ptr_stack);
}

int main(){

    struct stack *ptr_stack, stack1;
    file fp;
    ptr_stack = &stack1;

    init(ptr_stack);
    save_stack_to_file(ptr_stack, fp);
    try_push(ptr_stack, 3);
    try_push(ptr_stack, 5);
    try_push(ptr_stack, 7);

    save_stack_to_file(ptr_stack, fp);
    read_stack_from_file(ptr_stack, fp);
    clear_stack(ptr_stack);

    display(ptr_stack);

    return 0;
}
