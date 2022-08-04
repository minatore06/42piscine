#include <stdio.h>
#include "ft_find_next_prime.c"

int	main(void)
{
	if(ft_find_next_prime(0) == 2)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_find_next_prime(1) == 2)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_find_next_prime(2) == 2)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_find_next_prime(-3181) == 2)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_find_next_prime(2147483643) == 2147483647)
		printf("Corretto\n");
	else
		printf("Errato\n");
}
