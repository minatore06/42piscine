#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "ft_putnbr.c"

int main(int argc, char *argv[])
{
	int x;
	int y[10] = {0, -15, 2147483647, -2147483648, 3, 42, -985, -1, -42, -99999};
	int z;
	
	if(argc != 2)
	{
		return 1;
	}
	
	srandom(time(NULL));
	z=*argv[1]-48;
	
	printf("\n\n\nTest normale\n");
	for(int i=0; i<10; i++){
		printf(" | Input: %d", y[i]);
		ft_putnbr(y[i]);
		printf("\n");
	}
	
	printf("\n\n\nTest randomici\n");
	
	for(int i=0; i<z; i++){
		x=random();
		printf(" | Input: %d", x);
		ft_putnbr(x);
		printf("\n");
	}
	//int sos = *argv[1];
	
	//printf("%d\n", sos);

	return 0;
}
