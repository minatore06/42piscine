#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int main(int argn, char* argv[])
{
	if(argn != 2)
	{
		printf("Argomenti mancanti\n");
		return 0;
	}
	if((unsigned long)ft_strlen(argv[1]) == strlen(argv[1]))
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	return 0;
}
