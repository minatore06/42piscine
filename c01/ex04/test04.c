#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main(void)
{
	int a = 23, b = 3;

	ft_ultimate_div_mod(&a, &b);

	if(a == 23/3 && b == 23%3)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	return 0;
}
