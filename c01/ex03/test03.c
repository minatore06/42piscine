#include <stdio.h>
#include "ft_div_mod.c"

int main(void)
{
	int	div;
	int	mod;

	ft_div_mod(10, 2, &div, &mod);

	if(div == 10/2 && mod == 10%2)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	return 0;
}
