#include <stdio.h>
#include <stdlib.h>


void sum(int* tab, int size, int *result);
void avg(int* tab,  int size, float *result);


int main(int argc, char *argv[]) {
	int i=0, T[100], suma=0;
	float srednia;
	printf("Podaj wartosci elementow tablicy:\n");
	printf("(Wpisanie 0 zakonczy pobieranie liczb)\n");
	for(i=0; i<100;i++)
	{
		scanf("%d", &*(T+i));
		if(*(T+i)==0)
		{
			break;
		}
	}
sum(T,i,&suma);
printf("suma: %d\n", suma);
avg(T,i,&srednia);
printf("srednia: %.3f", srednia);

	return 0;
}

void sum(int* tab, int size, int *result)
{
	int i=0, suma=0;
	for(i=0; i<size; i++)
	{
		*result=*result+*(tab+i);
	}

}
void avg(int* tab,  int size, float *result)
{
	int i=0, suma=0;
	for(i=0; i<size; i++)
	{
		suma=suma+*(tab+i);
	}
		*result=suma/(float)i;
}
