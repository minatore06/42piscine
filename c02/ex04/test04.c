#include <stdio.h>
#include <string.h>
#include "ft_str_is_lowercase.c"

int main(void)
{
	char str[12] = "";

	ft_str_is_lowercase(str)?printf("Lowercase\n"):printf("Non lowercase\n");
	strcpy(str, "Hello World");
	ft_str_is_lowercase(str)?printf("Lowercase\n"):printf("Non lowercase\n");
	strcpy(str, "helloworld");
	ft_str_is_lowercase(str)?printf("Lowercase\n"):printf("Non lowercase\n");
	strcpy(str, "asd54sal");
	ft_str_is_lowercase(str)?printf("Lowercase\n"):printf("Non lowercase\n");
	strcpy(str, "lk;jh/");
	ft_str_is_lowercase(str)?printf("Lowercase\n"):printf("Non lowercase\n");
}
