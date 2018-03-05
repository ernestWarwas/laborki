#include <stdio.h>
#include <stdlib.h>

int main(){
    int t[20], i;
    int *pt = t;
    for(i=0; i<20; i++){
        *(pt + i) = rand();
    }
    for(i=0; i<20; i++){
        printf("%d\n", *(pt+i));
    }
    return 0;
}

