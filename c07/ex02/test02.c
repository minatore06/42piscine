#include <stdio.h>
#include "ft_ultimate_range.c"

int	main(void)
{
	int		i;
	int		*arr;
	int	min, max, len;
	
	min = 3;
	max = 8;
	i = 0;
	len = ft_ultimate_range(&arr, min, max);
	if(!arr)
	{
		printf("Errore\n");
		return (0);
	}
	if(len != 5)
	{
		printf("Len errata\n");
		return (0);
	}
	while (i < len)
	{
		if(arr[i] != min + i && len != 5)
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
	len = ft_ultimate_range(&arr, min, max);
	if(!arr)
	{
		printf("Errore\n");
		return (0);
	}
	if(len != 3)
	{
		printf("Len errata\n");
		return (0);
	}
	while (i < len)
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
	len = ft_ultimate_range(&arr, min, max);
	if(!arr)
	{
		printf("Errore\n");
		return (0);
	}
	if(len != 15)
	{
		printf("Len errata\n");
		return (0);
	}
	while (i < len)
	{
		if(arr[i] != min + i)
		{
			printf("Errore\n");
			return (0);
		}
		i++;
	}
	printf("Corretto\n");
	
	min = 0;
	max = 0;
	i = 0;
	len = ft_ultimate_range(&arr, min, max);
	if(arr)
	{
		printf("Errore\n");
		return (0);
	}
	if(len != 0)
	{
		printf("Len errata\n");
		return (0);
	}
	while (i < len)
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
	len = ft_ultimate_range(&arr, min, max);
	if(arr)
	{
		printf("Errore\n");
		return (0);
	}
	if(len != 0)
	{
		printf("Len errata\n");
		return (0);
	}
	while (i < len)
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
