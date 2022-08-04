#include <stdio.h>
#include "ft_split.c"

int main(int argc, char *argv[])
{
	char	**result;
	int	i;

	if(argc != 3)
	{
		printf("Numero argomenti errato\n");
		return (0);
	}
	result = ft_split(argv[1], argv[2]);
	i = 0;
	while(result[i])
	{
		printf("| %s\n", result[i]);
		i++;
	}
	return (0);
}
