#include <stdio.h>
#include <string.h>
#include "ft_str_is_alpha.c"

int main(void)
{
	char str[12] = "";

	ft_str_is_alpha(str)?printf("Alpha\n"):printf("Non alpha\n");
	strcpy(str, "Hello World");
	ft_str_is_alpha(str)?printf("Alpha\n"):printf("Non alpha\n");
	strcpy(str, "HelloWorld");
	ft_str_is_alpha(str)?printf("Alpha\n"):printf("Non alpha\n");
	strcpy(str, "S32al");
	ft_str_is_alpha(str)?printf("Alpha\n"):printf("Non alpha\n");
	strcpy(str, "Yo;oo/");
	ft_str_is_alpha(str)?printf("Alpha\n"):printf("Non alpha\n");
}
