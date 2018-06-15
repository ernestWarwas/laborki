#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char *argv[]) {
	const char* t1="Ala Ma Kota a kot Ma ALE";
	int i;
	int t=t1
	int dlugosc=strlen(t);
	printf("Ala Ma Kota a kot Ma ALE\n");
	for(i=dlugosc; i>=0;i--)
	{
		putchar(*(t+i));
	}

	return 0;
}
