#include <stdio.h>
#include <stdlib.h>
int add(int *first, int *second, int* result);
int subtract(int *first, int *second, int* result);
int multiply(int *first, int *second, int* result);
int divide(int *first, int *second, float* result);


int main()
{
    int a, b;
	printf("Podaj wartosc a: ");
	scanf("%d", &a);
	printf("Podaj wartosc b: ");
	scanf("%d", &b);
   int* zm_A=&a;
   int* zm_B=&b;
   int* wsk_wynik;
   int wynik;
   float* wsk_dzielwynik;
   float dzielwynik;

   wsk_wynik=&wynik;
   wsk_dzielwynik=&dzielwynik;
   add(zm_A, zm_B, wsk_wynik);
   printf("Suma: %d\n", *wsk_wynik);
   subtract(zm_A, zm_B, wsk_wynik);
   printf("Roznica: %d\n", *wsk_wynik);
   multiply(zm_A, zm_B, wsk_wynik);
   printf("Mnozenie: %d\n", *wsk_wynik);
   divide(zm_A, zm_B, wsk_dzielwynik);
   printf("Dzielenie: %f\n", *wsk_dzielwynik);


    return 0;
}
int add(int *first, int *second, int* result)
{

    if(first==NULL || second==NULL)
    {
        return 0;
    }
    else
    {
                *result=*first+*second;
        return 1;
    }
}
int subtract(int *first, int *second, int* result)
{
    if(first==NULL || second==NULL)
    {
        return 0;
    }
    else
    {
        *result=*first-*second;
        return 1;
    }
}
int multiply(int *first, int *second, int* result)
{


    if(first==NULL || second==NULL)
    {
        return 0;
    }
    else
    {
    *result=(*first)*(*second);
        return 1;
    }
}
int divide(int *first, int *second, float* result)
{
   if(first==NULL || second==NULL)
    {
        return 0;
    }
    else
    {
    *result=(*first)/(float)(*second);
        return 1;
    }

}
