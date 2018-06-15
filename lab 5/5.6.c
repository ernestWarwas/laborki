#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int rozmiar()
{
	int n;
	printf("podaj rozmiar: ");
	scanf("%d",&n);
	return n;
}
float* alokuj(float* tab, int rozmiar)
{
	tab=(float*)calloc(rozmiar,sizeof(float));
	return tab;
}
float wypisz(float* tab, int rozmiar)
{
	int i;
	for(i=0; i<rozmiar; i++)
	{
		scanf("%f",&(*(tab+i)));
	}	
}
float max(float*tab,int rozmiar)
{
	int i=0;
	float max=*(tab+i);
	for(i=0; i<rozmiar; i++)
	{
		if(*(tab+i)>max)
		{
			max=*(tab+i);
		}
	}
	printf("Max wynosi: %f", max);
}
float min(float*tab,int rozmiar)
{
	int i=0;
	float min=*(tab+i);
	for(i=0; i<rozmiar; i++)
	{
		if(*(tab+i)<min)
		{
			min=*(tab+i);
		}
	}
	printf("Min wynosi: %f", min);
}

float suma(float*tab, int rozmiar)
{
	int i=0;
	float suma=0;
	for(i=0; i<rozmiar; i++)
	{
		suma=suma+*(tab+i);
	}
	return suma;
}
float srednia(float*tab, int rozmiar)
{
	float srednia;
	srednia=suma(tab,rozmiar)/rozmiar;
	printf("Srednia wynosi: %f", srednia);
}
float* zwolnij_pamiec(float* tab)
{
	free(tab);
	tab=NULL;
	return tab;
}
int main(int argc, char *argv[]) {
	float* tab;
	int n,i;
	n=rozmiar();
	tab=alokuj(tab,n);
	wypisz(tab, n);
	max(tab,n);
	printf("\n");
	min(tab,n);
	printf("\nSuma wynosi: %f\n", suma(tab,n));
	srednia(tab,n);
	zwolnij_pamiec(tab);
	return 0;
}
