#include <stdio.h>
#include "ft_is_negative.c"

int	main(void)
{
	for(int i=0; i<11; i++)
	{
		printf(" | Input: %d", (0+i));
		ft_is_negative(0+i);
		printf("\n");
		printf(" | Input: %d", (0-i));
		ft_is_negative(0-i);
		printf("\n");
	}
	return 0;
}
