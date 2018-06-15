#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int rows = 5, columns = 5;

void fill_matrix(int *pointer)
{
    int i,j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            *(pointer + i *columns + j) = rand()%30;
        }
    }
}
void the_biggest_row(int *pointer)
{
    int i,j;
	int big;
    for(i = 0; i < rows; i++)
    {
    	big=*(pointer + i *columns + 0);
        for(j = 0; j < columns; j++)
        {
            if(*(pointer + i *columns + j)>=big)
            {
            	big=*(pointer + i *columns + j);
			}
        }
        printf("%d ", big);
    }
}
void the_biggest_column(int *pointer)
{
    int i,j;
	int big;
    for(i = 0; i < rows; i++)
    {
    	big=*(pointer + 0 *columns + j);
        for(j = 0; j < columns; j++)
        {
            if(*(pointer + j *columns + i)>=big)
            {
            	big=*(pointer + j *columns + i);
			}
        }
        printf("%d ", big);
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
    int A[5][5];
    int *pointer_A = &A[0][0];
    

    fill_matrix(pointer_A);
   
    show(pointer_A);
    the_biggest_row(pointer_A);
	the_biggest_column(pointer_A);


    return 0;
}
