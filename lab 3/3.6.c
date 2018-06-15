#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int main(int argc, char *argv[]) {
	FILE *wsk_file=NULL;
	char nazwa[150]="C:/Users/Dell/Desktop/PP2/Laboratorium 3/plik.txt";
	int i,j;
	int ilosc_plikow;
	int ilosc;
	FILE *plik=NULL;
	  srand(time(0));

	printf("Podaj ilosc liczb do losowania: \n");
	scanf("%d", &ilosc);
	int tab[ilosc];

	ilosc_plikow=ilosc/10;
	if(ilosc_plikow<10)
	{
		plik=fopen(nazwa, "w");
		for(i=0; i<ilosc; i++)
		{
			tab[i]=rand()%100;
			fprintf(plik,"%d\n", tab[i]);

		}
	}
	else
	{
	for(j=0; j<ilosc_plikow;j++)
		{
		plik=fopen(nazwa, "w");
		for(i=0; i<10; i++)
		{
			tab[i]=rand()%100;
			fprintf(plik,"%d\n", tab[i]);

		}
		}
	}
	fclose(plik);
	return 0;
}
