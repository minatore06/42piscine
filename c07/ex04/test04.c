#include <stdio.h>
#include "ft_convert_base.c"
#include "ft_convert_base2.c"

int	main(int argn, char *argv[])
{
	char	*str;
	if (argn != 4)
	{
		printf("Numero argomenti errato");
		return (0);
	}
	str = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", str);
}
