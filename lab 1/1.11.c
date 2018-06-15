#include <stdio.h>
#include <stdlib.h>


int swap(int *a, int *b);
int main()
{
    
    int a,b;
    int* zm1;
    int* zm2;
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);
    zm1=&a;
    zm2=&b;
    swap(zm1,zm2);
    printf("\nPO ZMIANIE:\n");
    printf("a: %d\n", a);
    printf("b: %d", b);

   
    return 0;
}

int swap(int *a, int *b)
{
	if(a==NULL || b==NULL)
    {
    	printf("Error!");
    	return 0;
	}
	else
	{
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
	return 1;
	}
}

