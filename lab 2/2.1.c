#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	const char* t1 = "Ala Ma Kota a kot Ma AlE";
	int i=0;
	do
	{
		putchar(*(t1+i));
		i++;
	}while(*(t1+i)!='\0');
	return 0;
}
