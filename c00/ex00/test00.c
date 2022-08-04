#include <stdio.h>
#include "ft_putchar.c"

int main(int argc, char *argv[])
{
	if(argc!=2){
		printf("numero di argomenti inaspettato");
		return 1;
	}
	ft_putchar(*argv[1]);
	return 0;
}
