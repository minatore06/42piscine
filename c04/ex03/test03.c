#include <stdio.h>
#include "ft_atoi.c"

int main(int argn, char* argv[])
{
	if(argn != 2)
	{
		printf("Numero argomenti errato\n");
		return 0;
	}
	printf("%d", ft_atoi(argv[1]));
	return 0;
}
