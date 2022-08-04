#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

int main(void)
{
	char str1[11] = "qwert\0";
	char str2[11] = "y\0";
	
	ft_strcat(str1, str2);
	if (strcmp(str1, "qwerty") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "asd");
	strcpy(str2, "asd");
	ft_strcat(str1, str2);
	if (strcmp(str1, "asdasd") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "asd");
	strcpy(str2, "sa");
	ft_strcat(str1, str2);
	if (strcmp(str1, "asdsa") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "zorro");
	strcpy(str2, "pepe");
	ft_strcat(str1, str2);
	if ( strcmp(str1, "zorropepe") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "hutao");
	strcpy(str2, "pollo");
	ft_strcat(str1, str2);
	if (strcmp(str1, "hutaopollo") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	return (0);
}
