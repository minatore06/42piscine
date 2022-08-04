#include <stdio.h>
#include "ft_iterative_factorial.c"

int	main(void)
{
	if(ft_iterative_factorial(0) == 1)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_iterative_factorial(1) == 1)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_iterative_factorial(2) == 2)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_iterative_factorial(4) == 24)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_iterative_factorial(10) == 3628800)
		printf("Corretto\n");
	else
		printf("Errato\n");
}
