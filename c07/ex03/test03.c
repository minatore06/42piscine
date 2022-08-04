#include <stdio.h>
#include "ft_strjoin.c"

int	main(void)
{
	char *str;
	char *sep = " | ";
	char **strs = malloc(sizeof(char *) * 5);
	strs[0] = "ciao";
	strs[1] = "come";
	strs[2] = "va?";
	strs[3] = "cacca";
	strs[4] = "vittoria";

	str = ft_strjoin(5, strs, sep);

	printf("%s\n", str);	
}
