#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]) {
	char path[150];
	char tab[150];
	puts("podaj sciezke do pliku\n");
	scanf("%s", path);
	FILE *wsk_file= NULL;
	wsk_file=fopen(path, "r");
	if(wsk_file==NULL)
	{
		puts("ERROR");
		return 1;
	}
	while(!feof(wsk_file))
	{
		fscanf(wsk_file,"%s", tab);
		printf("%n", tab);
	}
	return 0;
}
