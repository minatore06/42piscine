#include <stdio.h>
#include "ft_recursive_power.c"

int	main(void)
{
	if(ft_recursive_power(0, 0) == 1)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_recursive_power(1, 0) == 1)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_recursive_power(2, 1) == 2)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_recursive_power(4, 2) == 16)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_recursive_power(10, 5) == 100000)
		printf("Corretto\n");
	else
		printf("Errato\n");
}
