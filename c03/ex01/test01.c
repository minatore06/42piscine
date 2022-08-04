#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int main(void)
{
	char str1[11] = "qwertyuiop";
	char str2[11] = "adsfghjklz";
	if (ft_strncmp(str1, str2, 10) > 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "asd");
	strcpy(str2, "asd");
	if (ft_strncmp(str1, str2, 3) == 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "asd");
	strcpy(str2, "dsa");
	if (ft_strncmp(str1, str2, 3) < 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "zorro");
	strcpy(str2, "zorroino");
	if (ft_strncmp(str1, str2, 7) < 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	
	strcpy(str1, "hu tao");
	strcpy(str2, "pollo");
	if (ft_strncmp(str1, str2, 8) < 0)
	{
		printf("Corretto\n");
	}else{
		printf("Errato\n");
	}
	return (0);
}
