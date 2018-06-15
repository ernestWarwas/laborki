#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]) {
	char pathFromUserSour[150];
	char pathFromUserDest[150];
	char text[150];
	printf("Sciezka pliku zrodlowego:\n");
	scanf("%s", pathFromUserSour);
	printf("Sciezka pliku docelowego:\n");
	scanf("%s", pathFromUserDest);
	FILE *source = NULL;
	FILE *destination=NULL;
	source=fopen(pathFromUserSour, "r");
	if(source==NULL)
	{
		printf("Bledna sciezka!");
		return 1;
	}
	destination=fopen(pathFromUserDest, "w");
	while(!feof(source))
	{
		fscanf(source, "%s", text);
		fprintf(destination, "%s", strrev(text));
	}
	fclose(source);
	fclose(destination);
	return 0;
}
