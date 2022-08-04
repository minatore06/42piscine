/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:19:01 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/18 11:26:40 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_convert_dec_hex(long int dec, char *hex, int size)
{
	int		result;

	if (size == 0)
	{
		return (hex);
	}
	size--;
	ft_convert_dec_hex(dec / 16, hex, size);
	result = dec % 16;
	if (result > 9)
	{
		result += 97 - 10;
	}
	else
	{
		result += 48;
	}
	hex[size] = result;
	return (hex);
}

void	ft_print_spaces(int i)
{
	while (i++ < 16)
	{
		if (i % 2)
		{
			write(1, " ", 1);
		}
		write(1, "  ", 2);
	}
}

int	ft_print_hex(void **addr, char *str, int size)
{
	int		i;
	char	out[2];

	i = 0;
	while (i < 16 && i < size)
	{
		str[i] = *(char *)*addr;
		if (str[i] == '\0')
			break ;
		if (str[i] < 32 || str[i] > 126)
			str[i] = '.';
		ft_convert_dec_hex(*(long int *)*addr, out, 2);
		write(1, out, 2);
		if (i % 2)
		{
			write(1, " ", 1);
		}
		*addr = *addr + 1;
		i++;
	}
	return (i);
}

void	ft_print_addr(void *addr)
{
	char	out[16];

	ft_convert_dec_hex((long int)addr, out, 16);
	write(1, out, 16);
	write(1, ": ", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	int		j;
	int		lines;
	char	str[16];
	void	*untouched_addr;

	untouched_addr = addr;
	i = 0;
	lines = size / 16;
	if (size % 16)
		lines++;
	while (i < lines && size)
	{
		ft_print_addr(addr);
		j = ft_print_hex(&addr, str, size);
		ft_print_spaces(j);
		write(1, str, j);
		write(1, "\n", 1);
		size -= 16;
		i++;
	}
	return (untouched_addr);
}
