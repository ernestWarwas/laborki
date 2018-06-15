#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int i;
	char PLIK[150]="C:/Users/Dell/Desktop/PP2/Laboratorium 3/test123.txt";
	int a,suma=0;
	FILE *pliczek=NULL;
	pliczek=fopen(PLIK, "r");
	if(pliczek==NULL)
	{
		printf("ERROR!");
		exit(1);
	}
	else
	{
		while(!feof(pliczek))
		{
		fscanf(pliczek, "%d", &i);
		a=i;
		suma=suma+a;
		}

	printf("Suma wynosi: %d", suma);
	}
	fclose(pliczek);
	getch();
	system("PAUSE");
	return 1;
}
