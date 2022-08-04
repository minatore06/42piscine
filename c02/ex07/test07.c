#include <stdio.h>
#include <string.h>
#include "ft_strupcase.c"

int main(void)
{
	char str[12] = "Hello world!";
	
	printf("%s\n", ft_strupcase(str));
	strcpy(str, "HelloWorld!\0");
	printf("%s\n", ft_strupcase(str));
	strcpy(str, "HellaWorlZ\0");
	printf("%s\n", ft_strupcase(str));
	strcpy(str, " asd54a;a~\0");
	printf("%s\n", ft_strupcase(str));
	strcpy(str, "papata\0");
	printf("%s\n", ft_strupcase(str));
}
