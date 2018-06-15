#include <stdio.h>
#include <stdlib.h>


double* zwolnij_pamiec(double* tab)
{
	free(tab);
	tab=NULL;
	return tab;
}
int main(int argc, char *argv[]) {
	double* tab;
	int rozmiar;
	printf("Podaj rozmiar tablicy: ");
	scanf("%d",&rozmiar);
	tab=(double*)calloc(rozmiar, sizeof(double));
	tab=zwolnij_pamiec(tab);
	if(tab==NULL)
	{
		printf("Pamiec zostala zwolniona");
	}
	else
	{
		printf("Pamiec nie zostala zwolniona");
	}
	return 0;
}
