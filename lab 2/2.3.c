#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int marks_counter(const char* text, int* uppercase, int* lowercase, int* whitespace)
{
	int i=-1;
	if(strlen(text)==0)
	{
		printf("Tekst jest pusty");
		return -1;
	}
	if(uppercase==NULL || lowercase==NULL || whitespace==NULL)
	{
		printf("Przekazane argumenty sa nieprawidlowe");
		return -2;
	}
	do
	{
		i++;
		if(islower(*(text+i)))
		{
			*lowercase+=1;
		}
		if(isupper(*(text+i)))
		{
			*uppercase+=1;
		}
		if(isspace(*(text+i)))
		{
			*whitespace+=1;
		}
	}
	while(*(text+i)!='\0');
	return 1;
}
int main(int argc, char *argv[]) {
	int uppercase=0, lowercase=0, whitespace=0;
	
	char tab[30]="JakiS TeksT\n";
	int status;
	int *wsk=NULL;
	wsk=&uppercase;
	printf(tab);
	printf("\n");
	status=marks_counter(tab, wsk, &lowercase, &whitespace);
	
	if(status!=1)
	{
		printf("\nWystapil blad\n");
	}
	else
	{
		printf("Duze znaki: %d\n", uppercase);
	printf("Male znaki: %d\n", lowercase);
	printf("Biale znaki: %d", whitespace);
	
	}
	return 0;
}
