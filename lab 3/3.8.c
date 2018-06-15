#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	char plik1[150]="C:/Users/Dell/Desktop/PP2/Laboratorium 3/plik1";
	char plik2[150]="C:/Users/Dell/Desktop/PP2/Laboratorium 3/plik2";
	int tablica[1010][1010];
	int i,j,suma=0;
	FILE *pliczek1=NULL;
	FILE *pliczek2=NULL;
	pliczek1=fopen(plik1,"r");
	pliczek2=fopen(plik2,"w");
	if(pliczek1==NULL)
	{
		printf("Podana lokalizacja jest bledna!");
		return 2;
	}
	else
	{
		for(i=0; i<100;i++)
		{
			suma=0;
			for(j=0;i<100;j++)
			{
			fscanf(pliczek1, 1000, &tablica);
			suma=suma+tablica[i][j];
			}
			fprintf(pliczek2,"%d\n",suma);
		}
	}
	fclose(pliczek1);
	fclose(pliczek2);
	return 0;
}
