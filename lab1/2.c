#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 15;
    int *pa = &a;

    printf("wartosc zmiennej calkowitej - bezposrednio = %d\n", a);
    printf("wartosc zmiennej calkowitej - z wykorzystaniem wskaznika = %d\n", *pa);
    printf("adres zmiennej calkowitej = %p\n", &a);
    *pa = 27;
    printf("wartosc zmiennej calkowitej - bezposrednio = %d\n", a);
    printf("wartosc zmiennej calkowitej - z wykorzystaniem wskaznika = %d\n", *pa);
    printf("adres zmiennej calkowitej = %p\n", &a);
}
