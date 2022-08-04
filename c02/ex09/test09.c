#include <stdio.h>
#include <string.h>
#include "ft_strcapitalize.c"

int main(void)
{
	char str[12] = "Hello World!";
	
	printf("%s\n", ft_strcapitalize(str));
	strcpy(str, "hELLOwOrld!\0");
	printf("%s\n", ft_strcapitalize(str));
	strcpy(str, "HeLLa WoRlZ\0");
	printf("%s\n", ft_strcapitalize(str));
	strcpy(str, " ASD54a;a~\0");
	printf("%s\n", ft_strcapitalize(str));
	strcpy(str, "pA, PA-tA\0");
	printf("%s\n", ft_strcapitalize(str));
}
