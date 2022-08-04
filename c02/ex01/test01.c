#include <stdio.h>
#include "ft_strncpy.c"

int main(void)
{
	char str[13] = "Hello world!\0";
	char dst[13];
	int i = 0;

	ft_strncpy(dst, str, 13);

	while(i < 13)
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
