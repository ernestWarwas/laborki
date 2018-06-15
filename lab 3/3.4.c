#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]) {
	FILE *wsk_file=NULL;
	wsk_file=fopen("nowy.txt","w");
	int i;
	for(i=0; i<101; i++)
	{
		fprintf(wsk_file, "%d\n", i);
	}
	fclose(wsk_file);
	return 0;
}
