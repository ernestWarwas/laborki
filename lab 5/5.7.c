#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int* alokuj(int* tab)
{
		tab=(int*)malloc(100,sizeof(int));
		return tab;
}
int wypelnij(int* tab)
{
	int i=0;
	for(i=0;i<100;i++)
	{
		*(tab+i)=i;
	}
}
int wyswietl(int* tab)
{
	int i=0;
	for(i=0;i<100;i++)
	{
	printf("%d\n",*(tab+i));
	}
}
int* zwolnij_pamiec(int* tab)
{
	free(tab);
	tab=NULL;
	return tab;
}
int main(int argc, char *argv[]) {
	int* tab;
	int i=0;
	tab=alokuj(tab);
	if(tab==NULL)
	{
		printf("ERROR!");
		return 1;
	}
	else
	{
	wypelnij(tab);
	wyswietl(tab);
	zwolnij_pamiec(tab);
	}
	return 0;
}
