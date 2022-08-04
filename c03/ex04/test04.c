#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int main(void)
{
	char str1[20] = "asdfghjklqwerty\0";
	char str2[5] = "erty\0";
	
	if (strcmp(ft_strstr(str1, str2), "erty") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "asd");
	strcpy(str2, "asd");
	if (strcmp(ft_strstr(str1, str2), "asd") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "asd");
	strcpy(str2, "");
	if (strcmp(ft_strstr(str1, str2), "asd") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "zorrororo");
	strcpy(str2, "ro");
	if ( strcmp(ft_strstr(str1, str2), "rororo") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "hutaopollo");
	strcpy(str2, "tao\0s");
	if (strcmp(ft_strstr(str1, str2), "taopollo") == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	return (0);
}
