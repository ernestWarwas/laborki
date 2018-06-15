#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int a=1;
	float b=2;
	double c=3;

	int *wsk_a;
	float *wsk_b;
	double *wsk_c;

	wsk_a=&a;
	wsk_b=&b;
	wsk_c=&c;
	printf("przed zmiana: \n");
	printf("a: %d\n", *wsk_a);
	printf("b: %.2f\n", *wsk_b);
	printf("c: %.2f\n", *wsk_c);
	*wsk_a=4;
	*wsk_b=5;
	*wsk_c=6;

	printf("po zmianie: \n");
	printf("a: %d\n", *wsk_a);
	printf("b: %.2f\n", *wsk_b);
	printf("c: %.2f\n", *wsk_c);
	return 0;
}
