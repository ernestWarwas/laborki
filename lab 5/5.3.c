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



int main(){
    int* tab;
    int rozmiar;

    rozmiar = pobierz_rozmiar();
    tab = alokuj(tab, rozmiar);
    wypelnij(tab, rozmiar);
    wyswietl(tab, rozmiar);

    return 0;
}
