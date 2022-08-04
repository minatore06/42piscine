#include <stdio.h>
#include <string.h>
#include "ft_strlowcase.c"

int main(void)
{
	char str[12] = "Hello world!";
	
	printf("%s\n", ft_strlowcase(str));
	strcpy(str, "hELLOwOrld!\0");
	printf("%s\n", ft_strlowcase(str));
	strcpy(str, "HeLLaWoRlZ\0");
	printf("%s\n", ft_strlowcase(str));
	strcpy(str, " ASD54a;a~\0");
	printf("%s\n", ft_strlowcase(str));
	strcpy(str, "PAPAtA\0");
	printf("%s\n", ft_strlowcase(str));
}
