#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int a=5;
	int *wsk=NULL;
	wsk=&a;
	printf("%d %d %p\n", a, *wsk, &a);
	*wsk=12;
	printf("\nPO ZMIANIE:\n");
	printf("%d %d %p", a, *wsk, &a);
	return 0;
}
