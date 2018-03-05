#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    double sum = 0, avg = 0;
    double t[100];
    double *pt = t;
    for(i=1; i<=100; i++){
        *(pt + (i-1)) = (double)((rand()%100)/10);
    }
    for(i=1; i<=100; i++){
        printf("sum = %.2f\tavg = %.2f\n", sum += *(pt+(i-1)), avg = (double)sum/i);
    }
    return 0;
}


