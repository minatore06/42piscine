/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:50:56 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/15 10:13:27 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int dig, int num, int pos, char out[])
{
	pos++;
	if (dig == 0)
	{
		write(1, out, pos - 1);
		if (out[0] != 10 - pos + 49)
		{
			write(1, ", ", 2);
		}
		return ;
	}
	while (num + dig - 1 < 10)
	{
		out[pos - 1] = num + 48;
		ft_putnbr(dig - 1, num + 1, pos, out);
		num++;
	}
}

void	ft_print_combn(int n)
{
	char	out[9];

	ft_putnbr(n, 0, 0, out);
}
