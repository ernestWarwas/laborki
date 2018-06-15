#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	double T[20];
	srand( time( NULL ) );
	int i=0;
	for(i=0; i<20; i++)
	{
		*(T+i)= (double ) rand() / RAND_MAX *(10);
	}
	for(i=0; i<20; i++)
	{
	printf("%.3f ", *(T+i));
	}
	printf("\n");
	for(i=0; i<20; i=i+2)
	{
	printf("%.3f ", *(T+i));
	}
	return 0;
}
