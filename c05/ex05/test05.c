#include <stdio.h>
#include "ft_sqrt.c"

int	main(void)
{
	if(ft_sqrt(0) == 0)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_sqrt(1) == 1)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_sqrt(2) == 0)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_sqrt(1640045925) == 0)
		printf("Corretto\n");
	else
		printf("Errato\n");
	if(ft_sqrt(2147395600) == 46340)
		printf("Corretto\n");
	else
		printf("Errato\n");
}
