#include <stdio.h>
#include <string.h>
#include "ft_putstr_non_printable.c"

int main(void)
{
	char str[20] = "Hello\nWorld\xfe!as\xa5";
	ft_putstr_non_printable(str);
	return 0;
}
