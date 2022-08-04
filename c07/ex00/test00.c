#include <stdio.h>
#include "ft_strdup.c"

int main(void)
{
	char str[13] = "Hello world!\0";
	char *dst;
	int i = 0;

	dst = ft_strdup(str);

	while(dst[i] != '\0')
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
