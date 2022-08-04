#include <stdio.h>
#include "ft_atoi_base.c"

int main(int argn, char* argv[])
{
	if(argn != 3)
	{
		printf("Numero argomenti errato\n");
		return 0;
	}
	printf("%d", ft_atoi_base(argv[1], argv[2]));
	return 0;
}
