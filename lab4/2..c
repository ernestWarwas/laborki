#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

struct complex_t
{
   	 float re;
   	 float im;
};

struct complex_t* set(struct complex_t* cp, float re, float im);

void show(const struct complex_t* cp);

float complex_abs(struct complex_t* cp);

int main()
{
    int rzeczywista = 0;
    int urojona = 0;

    struct complex_t p1;

    p1.re = rand()%10;
    p1.im = rand()%10;

    show(&p1);
    printf("Modul %f", complex_abs(&p1));
}

struct complex_t* set(struct complex_t* cp, float re, float im)
{
    cp->re = re;
    cp->im = im;
}

void show(const struct complex_t* cp){
    printf("%d + i%d", cp->re, cp->im);
}

float complex_abs(struct complex_t* cp){
    int x = 0;
    int y = 0;
    float result = 0;
    x = cp->re;
    y = cp->im;

    result = sqrt(pow(x,2) + pow(y,2));
    return result;
}
