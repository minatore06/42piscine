#include <stdio.h>
#include "ft_fibonacci.c"

int	main(void)
{
	if(ft_fibonacci(0) == 0)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_fibonacci(1) == 1)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_fibonacci(2) == 1)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_fibonacci(-3) == -1)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_fibonacci(10) == 55)
		printf("Corretto\n");
	else
		printf("Errato\n");
}
