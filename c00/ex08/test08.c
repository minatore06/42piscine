#include <stdio.h>
#include "ft_print_combn.c"

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Numero argomenti errato");
		return 0;
	}
	ft_print_combn(*argv[1]-48);
	return 0;
}
