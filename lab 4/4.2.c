#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct complex_t
{
         float re;
         float im;
};

struct complex_t* set(struct complex_t* cp, float re, float im)
{

    cp->re = re ;
    cp->im = im ;

    return cp;
}

void show(const struct complex_t* cp)
{
    printf("\n%f i+ %f\n",cp->re , cp->im);

}


float complex_abs(struct complex_t* cp)
{
    int x=0;
    int y=0 ;
    float result = 0 ;
    x = cp->re ;
    y = cp->im ;

    result = sqrt(pow(x,2) + pow(y,2)) ;

    return result ;

}

int main()
{

    struct complex_t pierwsza ;
    struct complex_t druga ;

    pierwsza.re = rand()%10;
    pierwsza.im = rand()%10;
    set(&druga,10,15);

    show(&pierwsza);
    show(&druga);


    printf("modul : %.2f" ,complex_abs(&pierwsza));

    return 0;
}

