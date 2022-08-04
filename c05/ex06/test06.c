#include <stdio.h>
#include "ft_is_prime.c"

int	main(void)
{
	if(ft_is_prime(0) == 0)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_is_prime(1) == 0)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_is_prime(2) == 1)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_is_prime(-3) == 0)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_is_prime(2147483647) == 1)
		printf("Corretto\n");
	else
		printf("Errato\n");
}
