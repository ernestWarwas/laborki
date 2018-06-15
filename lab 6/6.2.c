#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void wypelnij_tablice(float* wsk_tab, int wiersze, int kolumny) {

    float x = 0;
    int i, j;

    for(i = 0 ; i < wiersze ; i++) {
        for( j = 0 ; j < kolumny ; j++) {

            if(j == 0) *(wsk_tab + i * kolumny + j) = x;
            if(j == 1) *(wsk_tab + i * kolumny + j) = sin(x);
        }
        x += 0.01;
    }
}

void wyswietl_tablice(float* wsk_tab, int wiersze, int kolumny) {

    int i,j;

    for(i = 0 ; i < wiersze ; i++) {
        for( j = 0 ; j < kolumny ; j++) {

            if(j == 0) printf("%.4f\t", *(wsk_tab + i * kolumny + j));
            if(j == 1) printf("%.4f\n", *(wsk_tab + i * kolumny + j));
        }
    }

}

int main(void) {

    int wiersze = 200;
    int kolumny = 2;

    float tablica[wiersze][kolumny];
    float* wsk_tab = tablica;

    wypelnij_tablice(wsk_tab, wiersze, kolumny);
    wyswietl_tablice(wsk_tab, wiersze, kolumny);
}

