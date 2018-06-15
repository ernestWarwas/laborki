#include <stdlib.h>
#include <stdio.h>
#include <Math.h>
#include <ctype.h>

int current_size;
int max_size = 3;

void display(int *ptr_stack)
{
    int i;
    printf("\n == DISPLAY STACK ==\n");
    for(i = current_size - 1; i >= 0; i--)
    {
        printf("\n%d", *(ptr_stack + i));
    }

}

void clear()
{
    printf("\nStack cleared\n");
    current_size = 0;

}

int pop(int *ptr_stack)
{
    if(current_size == 0)
    {
        printf("\nStack is empty");
        return NULL;
    }
    else
    {
        int element;
        current_size--;
        element = *(ptr_stack + current_size);
        printf("\nRemove element from stack = %d\n", element);
        display(ptr_stack);
        return element;
    }

}


void push(int element, int *ptr_stack)
{
    if(current_size < max_size)
    {
        *(ptr_stack + current_size) = element;
        current_size++;
    }
    else{
        printf("\nStack is overflow! :D");
    }

        display(ptr_stack);
}


int main()
{
    int stack[3];
    current_size = 0;

    push(1, stack);
    push(2, stack);
    push(3, stack);

    pop(stack);
    pop(stack);
    pop(stack);
    clear();
    display(stack);

return 0;
}
