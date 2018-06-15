#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char* alokuj(char*tab, int rozmiar)
{
    tab=(char*)calloc(rozmiar,sizeof(char));
    return tab;
}
char kopiuj(char*tab, char* slowo1, char* slowo2, char* slowo3)
{
	strcpy(tab,slowo1);
	strcat(tab,slowo2);
	strcat(tab,slowo3);	
}
liczrozmiar(char*slowo1,char*slowo2,char*slowo3)
{
	int a,b,c,rozmiar=0;
	a=strlen(slowo1);
	b=strlen(slowo2);
	c=strlen(slowo3);
	rozmiar=a+b+c;
	return rozmiar;
}
int main(int argc, char *argv[]) {
	char slowo1[]="Oto\n";
	char slowo2[]="Tablica\n";
	char slowo3[]="Dynamiczna";
	char* tab;
	char* slowo1a=NULL;
	char* slowo2a=NULL;
	char* slowo3a=NULL;
	slowo1a=slowo1;
	slowo2a=slowo2;
	slowo3a=slowo3;
	int rozmiar=0;
	rozmiar=liczrozmiar(slowo1a,slowo2a,slowo3a);
	tab=alokuj(tab,rozmiar);
	kopiuj(tab,slowo1a,slowo2a,slowo3a);
	puts(tab);
	return 0;
}
