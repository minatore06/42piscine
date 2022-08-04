/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:20:07 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/26 17:20:31 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_free_numb(char *out, int x, int pos)
{
	int		i;

	i = 0;
	while (i < pos)
	{
		if (out[i] == x + 48 || out[i] + pos - i == x + 48
			|| out[i] - pos + i == x + 48)
		{
			x++;
			i = 0;
			continue ;
		}
		i++;
	}
	return (x);
}

void	ft_recursive_resolution(char *out, int pos, int *count)
{
	int		x;

	x = 0;
	if (pos == 10)
	{
		write(1, out, 10);
		write(1, "\n", 1);
		(*count)++;
		return ;
	}
	while (x < 10)
	{
		x = ft_free_numb(out, x, pos);
		if (x > 9)
			return ;
		out[pos] = x + 48;
		ft_recursive_resolution(out, pos + 1, count);
		x++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		count;
	char	out[10];

	count = 0;
	ft_recursive_resolution(out, 0, &count);
	return (count);
}
