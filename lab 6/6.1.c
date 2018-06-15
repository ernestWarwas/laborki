#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wypelnij(int *wsk, int wiersze,int kolumny)
{
    int i,j;

    for(i=1; i<wiersze; i++)
    {
        for(j=1; j<kolumny; j++)
        {
            *(wsk+i*kolumny+j)=i*j;
        }
    }
}

void wyswietl(int *wsk, int wiersze,int kolumny)
{
    int i,j;
    for(i=1; i<wiersze; i++)
    {
        printf("\n");
        for(j=1; j<kolumny; j++)
        {
            printf("%d\t", *(wsk+i*kolumny+j));
        }
    }
}

int main(void)
{
    int tab[11][11];
    int wiersze = 11;
    int kolumny = 11;

    int *wsk =tab;

    int i,j;

    wypelnij(wsk,wiersze, kolumny);
    wyswietl(wsk,wiersze,kolumny);

}
