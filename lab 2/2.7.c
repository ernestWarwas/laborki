#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int space_changer(char* t);

int main(){
   char tekst[1010];
   char* p;
   int i=0;
   printf( "Wpisz dowolny tekst: ");
   gets(tekst);
   p=tekst;
space_changer(p);
puts(p);

}
int space_changer(char* t)
{
	int i=0, ile=0;
	if(t==NULL)
	{
		return -1;
	}
	else
	{
		do
		{
			if(*(t+i)==' ')
			{
			*(t+i)='_';
			ile++;
			}
			i++;
	}while(*(t+i)!='\0');
	return ile;
	}
}
