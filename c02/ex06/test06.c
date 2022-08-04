#include <stdio.h>
#include <string.h>
#include "ft_str_is_printable.c"

int main(void)
{
	char str[12] = "";

	ft_str_is_printable(str)?printf("Printable\n"):printf("Non printable\n");
	strcpy(str, "HelloWorld!");
	ft_str_is_printable(str)?printf("Printable\n"):printf("Non printable\n");
	strcpy(str, "HellaWorlZ");
	ft_str_is_printable(str)?printf("Printable\n"):printf("Non printable\n");
	strcpy(str, " asd54a;a~");
	ft_str_is_printable(str)?printf("Printable\n"):printf("Non printable\n");
	strcpy(str, "\b");
	ft_str_is_printable(str)?printf("Printable\n"):printf("Non printable\n");
}
