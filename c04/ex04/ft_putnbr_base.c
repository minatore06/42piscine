/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:11:48 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/19 17:12:24 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
		{
			return (0);
		}
		j = i;
		while (base[++j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
		}
		i++;
	}
	if (i == 1)
	{
		i = 0;
	}
	return (i);
}

void	ft_putnbr(int nb, char *base, int nbase)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / nbase, base, nbase);
		nb = -(nb % nbase);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= nbase)
	{
		ft_putnbr(nb / nbase, base, nbase);
	}
	nb %= nbase;
	nb = base[nb];
	write(1, &nb, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		nbase;

	nbase = check_base(base);
	if (!nbase)
	{
		return ;
	}
	ft_putnbr(nbr, base, nbase);
}
