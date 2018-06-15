#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int rows = 4, columns = 4;

void fill_matrix(int *pointer)
{
    int i,j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            *(pointer + i *columns + j) = rand()%10;
        }
    }
}

void fill_matrix_ones(int *pointer)
{
    int i,j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            if(i == j)
                *(pointer + i *columns + j) = 1;
            else
                *(pointer + i *columns + j) = 0;
        }
    }
}

void show(int *pointer)
{
    int i,j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%d\t", *(pointer + i *columns + j));
        }

        printf("\n");
    }

    printf("\n");
}

int main(void)
{
    int A[4][4], B[4][4], C[4][4];
    int *pointer_A = &A[0][0];
    int *pointer_B = &B[0][0];
    int *pointer_C = &C[0][0];

    fill_matrix(pointer_A);
    fill_matrix(pointer_B);
    fill_matrix_ones(pointer_C);

    show(pointer_A);
    show(pointer_B);
    show(pointer_C);



    return 0;
}
