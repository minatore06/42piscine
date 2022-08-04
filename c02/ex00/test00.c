#include <stdio.h>
#include "ft_strcpy.c"

int main(void)
{
	char str[13] = "Hello world!\0";
	char dst[13];
	int i = 0;

	ft_strcpy(dst, str);

	while(str[i] != '\0')
	{
		if(str[i] != dst[i]){
			printf("Errato\n");
			return 0;
		}
		i++;
	}
	printf("Corretto\n");
	return 0;
}
