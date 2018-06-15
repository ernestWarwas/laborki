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

void add_rows(int *pointer)
{
    int i,j;
    int suma;
	puts("sumy poszczegolnych wierszy");
    for(i = 0; i < rows; i++)
    {
    	suma=0;
        for(j = 0; j < columns; j++)
        {
            suma= suma + *(pointer + i *columns + j);
        }
        printf("%d\n", suma);
    }
}
void add_columns(int *pointer)
{
    int i,j;
    int suma;
	puts("\nsumy poszczegolnych kolumn");
    for(i = 0; i < rows; i++)
    {
    	suma=0;
        for(j = 0; j < columns; j++)
        {
            suma= suma + *(pointer + j *columns + i);
        }
        printf("%d ", suma);
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
    puts("Dla macierzy A:");
	add_rows(pointer_A);
	add_columns(pointer_A);
	puts("\n\nDla macierzy B:");
	add_rows(pointer_B);
	add_columns(pointer_B);
	puts("\n\nDla macierzy C:");
	add_rows(pointer_C);
	add_columns(pointer_C);
    return 0;
}
