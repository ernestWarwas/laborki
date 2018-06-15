#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int change_letter_size(const char* src, char* dest);
int main(int argc, char *argv[]) {
	char tekst[1010]={'\0'};
	char tekst2[1010]={'\0'};
	char* t1=NULL;
	char* t2=NULL;
	int i=0, size;
	printf("Podaj dowolny tekst: ");
	gets(tekst);
	size=strlen(tekst);
	t1=tekst;
	t2=tekst2;
	change_letter_size(t1, t2);
	for(i=0; i<size; i++)
	{
		printf("%c", *(t2+i));
	}
	return 0;
}
int change_letter_size(const char* src, char* dest)
{
	int size, i=0;
	size=strlen(src);
	if(src==NULL && dest==NULL)
	{
	return 0;
	}
	else
	{
		for(i=0; i<size; i++)
		{

        	if (*(src+i)>='A'&&*(src+i)<='Z')
        	{
            	(*(dest+i))=(*(src+i))+32;

        	}
        	else if(*(src+i)>='a'&&*(src+i)<='z')
        	{
            	(*(dest+i))=(*(src+i))-32;
        	}

		}

	return 1;
	}
}
