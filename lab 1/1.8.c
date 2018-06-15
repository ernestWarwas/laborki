#include <stdio.h>
#include <stdlib.h>


void sum(float* tab, int size, float *result);
void avg(float* tab,  int size, float *result);


int main(int argc, char *argv[]) {
	int i=0;
	float srednia, T[100], suma=0;
	printf("Podaj wartosci elementow tablicy:\n");
	printf("(Wpisanie 0 zakonczy pobieranie liczb)\n");
	for(i=0; i<100;i++)
	{
		scanf("%f", &*(T+i));
		if(*(T+i)==0)
		{
			break;
		}
	}
if(i!=0)
{
sum(T,i,&suma);
printf("suma: %.2f\n", suma);
avg(T,i,&srednia);
printf("srednia: %.2f", srednia);

	return 0;
}
else
{
	printf("Error");
	return 1;
}
}
void sum(float* tab, int size, float *result)
{
	int i=0, suma=0;
	for(i=0; i<size; i++)
	{
		*result=*result+*(tab+i);
	}

}
void avg(float* tab,  int size, float *result)
{
	int i=0;
	float suma=0;
	for(i=0; i<size; i++)
	{
		suma=suma+*(tab+i);
	}
		*result=suma/(float)i;
}
