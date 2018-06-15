#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	double T[100];
	double suma=0, srednia;
	srand( time( NULL ) );
	int i=0;
	for(i=0; i<100; i++)
	{
		*(T+i)= (double ) rand() / RAND_MAX *(10);
	}
	for(i=0; i<100; i++)
	{
	printf("%.3f\n", *(T+i));
	}
	printf("\n");
	for(i=0; i<100; i++)
	{
		suma=suma+*(T+i);
	}
	srednia=suma/(float)i;
	printf("suma wynosi: %.2f\n", suma);
	printf("srednia wynosi: %.2f", srednia);
		return 0;
}
