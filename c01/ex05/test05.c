#include <stdio.h>
#include "ft_putstr.c"

int main(int argn, char* argv[])
{
	if(argn != 2)
	{
		printf("Argomenti errati\n");
		return 0;
	}
	ft_putstr(argv[1]);
	return 0;
}
