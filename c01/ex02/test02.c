#include <stdio.h>
#include "ft_swap.c"

int main(void)
{
	int a = 10;
	int b = 25;

	ft_swap(&a, &b);
	if(a == 25 && b == 10)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	return 0;
}
