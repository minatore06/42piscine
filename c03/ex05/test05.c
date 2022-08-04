#include "ft_strlcat.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[11] = "qwert\0";
	char str2[11] = "y\0";
	unsigned int x;
	
	x = ft_strlcat(str1, str2, 11);
	if (strcmp(str1, "qwerty") == 0 && x == 6)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "asd");
	strcpy(str2, "");
	x = ft_strlcat(str1, str2, 11);
	if (strcmp(str1, "asd") == 0 && x == 3)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "asd");
	strcpy(str2, "sa");
	x = ft_strlcat(str1, str2, 4);
	if (strcmp(str1, "asd") == 0 && x == 5)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "zorro");
	strcpy(str2, "pepe");
	x = ft_strlcat(str1, str2, 4);
	if ( strcmp(str1, "zorro") == 0 && x == 8)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "hutao");
	strcpy(str2, "pollo\0sos");
	x = ft_strlcat(str1, str2, 11);
	if (strcmp(str1, "hutaopollo") == 0 && x == 10)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	return (0);
}
