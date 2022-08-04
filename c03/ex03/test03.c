#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

int main(void)
{
	char str1[11] = "qwert\0";
	char str2[11] = "y\0";
	
	ft_strncat(str1, str2, 1);
	if (strcmp(str1, "qwerty") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "asd");
	strcpy(str2, "asd");
	ft_strncat(str1, str2, 2);
	if (strcmp(str1, "asdas") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "asd");
	strcpy(str2, "sa\0lsa");
	ft_strncat(str1, str2, 5);
	if (strcmp(str1, "asdsa") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "zorro");
	strcpy(str2, "pepe");
	ft_strncat(str1, str2, 0);
	if ( strcmp(str1, "zorro") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "hutao");
	strcpy(str2, "polloso\0s");
	ft_strncat(str1, str2, 5);
	if (strcmp(str1, "hutaopollo") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	return (0);
}
