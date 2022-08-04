#include <stdio.h>
#include <string.h>
#include "ft_strlcpy.c"

int main(void)
{
	char str[13] = "Hello world!\0";
	char dst[20] = "                    ";
	int i = 0;
	unsigned int size;
	int null = 0;

	size = ft_strlcpy(dst, str, 0);

	if(size != 12){
		printf("Errata size\n");
	}

	while(dst[i])
	{
		if(null){
			if(dst[i] == '\0'){
				printf("Errato too many null char\n");
				return 0;
			}
		}
		else if(str[i] != dst[i]){
			printf("Errato\n");
			return 0;
		}
		if(str[i] == '\0'){
			null = 1;
		}
		i++;
	}
	printf("Corretto\n");
	return 0;
}
