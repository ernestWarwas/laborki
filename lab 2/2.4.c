#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]) {
	const char* tekst = "Ala ma kota";
	int i=0;
	int dlugosc;
	dlugosc=strlen(tekst);
	do
	{
		printf("%c", *(tekst+i));
		i++;
	}while(*(tekst+i)!=' ');
	return 0;
}
