#include <stdio.h>
#include <string.h>
#include "ft_str_is_uppercase.c"

int main(void)
{
	char str[12] = "";

	ft_str_is_uppercase(str)?printf("Uppercase\n"):printf("Non uppercase\n");
	strcpy(str, "Hello World");
	ft_str_is_uppercase(str)?printf("Uppercase\n"):printf("Non uppercase\n");
	strcpy(str, "HELLAWORLZ");
	ft_str_is_uppercase(str)?printf("Uppercase\n"):printf("Non uppercase\n");
	strcpy(str, "ASD54AAL");
	ft_str_is_uppercase(str)?printf("Uppercase\n"):printf("Non uppercase\n");
	strcpy(str, "SA;SD/FGH");
	ft_str_is_uppercase(str)?printf("Uppercase\n"):printf("Non uppercase\n");
}
