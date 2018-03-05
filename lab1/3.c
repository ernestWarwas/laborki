#include <stdio.h>
#include <stdlib.h>

int main(){
    int t[10], i;
    int *pt = t;
    for(i=0; i<10; i++){
        *(pt + i) = i;
    }
    for(i=0; i<10; i++){
        printf("%d, ", *(pt+i));
    }
    return 0;
}
