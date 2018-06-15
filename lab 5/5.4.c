#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int* alokuj(int*tab, int rozmiar)
{
    tab=(int*)calloc(rozmiar,sizeof(int));

    return tab;
}
int wypelnij(int* tab,int rozmiar)
{
    int i;
    for(i=0;i<rozmiar; i++)
    {
        *(tab+i)=rand()%10;
    }

}
int wyswietl(int* tab, int rozmiar)
{
    int i;
    for(i=0;i<rozmiar; i++)
    {
        printf("%d\n", *(tab+i));
    }

}

int pobierz_rozmiar() {
    int rozmiar;
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &rozmiar);

    return rozmiar;
}

int zmien_rozmiar(int rozmiar)
	{	
	int rozmiar2;
	rozmiar2=2*rozmiar;
	return rozmiar2;
	}
int* alokuj2(int*tab, int rozmiar2)
{
    tab=(int*)realloc(rozmiar2,2*sizeof(int));

    return tab;
}



int main(){
    int* tab;
    int rozmiar,rozmiar2;

    rozmiar = pobierz_rozmiar();
    tab = alokuj(tab, rozmiar);
    wypelnij(tab, rozmiar);
    rozmiar2=zmien_rozmiar(rozmiar);
    tab=alokuj2(tab,rozmiar2);
    wyswietl(tab, rozmiar2);

    return 0;
}
