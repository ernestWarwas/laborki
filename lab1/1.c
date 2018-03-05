#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 6;
    float b = 6.8;
    char c = '#';
    int *pA = &a;
    float *pB = &b;
    char *pC = &c;
    *pA = 8;
    *pB = 7.8;
    *pC = '$';
    printf("%d, %f, %c", *pA, *pB, *pC);
}

