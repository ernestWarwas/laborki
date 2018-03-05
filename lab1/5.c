#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float t[20];
    float *pt = t;
    for(i=0; i<20; i++){
        *(pt + i) = (float)((rand()%100)/10);
    }
    for(i=0; i<20; i++){
        printf("%f\n", *(pt+i));
    }
    return 0;
}

