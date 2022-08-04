#include <stdio.h>
#include <string.h>
#include "ft_str_is_numeric.c"

int main(void)
{
	char str[12] = "";

	ft_str_is_numeric(str)?printf("Numeric\n"):printf("Non Numeric\n");
	strcpy(str, "Hello World");
	ft_str_is_numeric(str)?printf("Numeric\n"):printf("Non Numeric\n");
	strcpy(str, "1234567890");
	ft_str_is_numeric(str)?printf("Numeric\n"):printf("Non Numeric\n");
	strcpy(str, "76dfu");
	ft_str_is_numeric(str)?printf("Numeric\n"):printf("Non Numeric\n");
	strcpy(str, "0;9'");
	ft_str_is_numeric(str)?printf("Numeric\n"):printf("Non Numeric\n");
}
