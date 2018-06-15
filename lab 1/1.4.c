#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
		int T[20];
	int i=0;
	for(i=0; i<20; i++)
	{
		*(T+i)=rand()%10;
	}
	for(i=0; i<20; i++)
	{
	printf("%d ", *(T+i));
	}
	printf("\n");
	for(i=0; i<20; i=i+2)
	{
	printf("%d ", *(T+i));
	}
	return 0;
}
