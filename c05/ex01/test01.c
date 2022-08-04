#include <stdio.h>
#include "ft_recursive_factorial.c"

int	main(void)
{
	if(ft_recursive_factorial(0) == 1)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_recursive_factorial(1) == 1)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_recursive_factorial(2) == 2)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_recursive_factorial(-4) == 0)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_recursive_factorial(10) == 3628800)
		printf("Corretto\n");
	else
		printf("Errato\n");
}
