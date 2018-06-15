#include <stdio.h>
#include <stdlib.h>


void alokacja()
{
	double* zmienna;
	zmienna=(double*) calloc(1,sizeof(double));
	puts("miejsce pamieci: ");
	printf("%p", zmienna);
	free(zmienna);
}
int main(int argc, char *argv[]) {
	alokacja();
	return 0;
}
