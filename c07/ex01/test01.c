#include <stdio.h>
#include "ft_range.c"

int	main(void)
{
	int		i;
	int		*arr;
	int	min, max;
	
	min = 3;
	max = 8;
	i = 0;
	arr = ft_range(min, max);
	while (i + min < max)
	{
		if(arr[i] != min + i)
		{
			printf("Errore\n");
			return (0);
		}
		i++;
	}
	printf("Corretto\n");
	
	min = -5;
	max = -2;
	i = 0;
	arr = ft_range(min, max);
	while (i + min < max)
	{
		if(arr[i] != min + i)
		{
			printf("Errore\n");
			return (0);
		}
		i++;
	}
	printf("Corretto\n");
	
	min = -5;
	max = 10;
	i = 0;
	arr = ft_range(min, max);
	while (i + min < max)
	{
		if(arr[i] != min + i)
		{
			printf("Errore\n");
			return (0);
		}
		i++;
	}
	printf("Corretto\n");
	
	min = 1;
	max = 1;
	i = 0;
	arr = ft_range(min, max);
	while (i + min < max)
	{
		if(arr[i] != min + i)
		{
			printf("Errore\n");
			return (0);
		}
		i++;
	}
	printf("Corretto\n");
	
	min = 10;
	max = 0;
	i = 0;
	arr = ft_range(min, max);
	while (i + min < max)
	{
		if(arr[i] != min + i)
		{
			printf("Errore\n");
			return (0);
		}
		i++;
	}
	printf("Corretto\n");
}
