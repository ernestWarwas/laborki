#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ASCIIZ_length(const char* txt);
int main(int argc, char *argv[]) {
	char tekst[1010];
	char* t1;
	printf("Podaj jakis tekst:\n");
	gets(tekst);
	t1=tekst;
	ASCIIZ_length(t1);
	return 0;
}
int ASCIIZ_length(const char* txt)
{
	int dlugosc=0;
	if(txt==NULL)
	{
		return -1;
	}
	else
	{
	dlugosc=strlen(txt);
	printf("Dlugosc: %d\n", dlugosc);
	return dlugosc;
	}
}
