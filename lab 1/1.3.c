#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int T[10];
	int i=0;
	for(i=0; i<10; i++)
	{
		*(T+i)=rand()%10;
	}
	for(i=0; i<10; i++)
	{
		printf("%d ", *(T+i));	}
	return 0;
}
