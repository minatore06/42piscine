/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:48:37 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/08/01 10:50:05 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	check_base(char *base);

int	ft_ndigit_to(int nbr, int nbase)
{
	int		digit;

	digit = 0;
	if (!nbr)
		digit++;
	while (nbr != 0)
	{
		nbr /= nbase;
		digit++;
	}
	return (digit);
}

void	ft_putnbr_to(int num10, char *result, char *base, int nbase)
{
	int		i;

	i = ft_ndigit_to(num10, nbase);
	if (num10 < 0)
	{
		result[0] = '-';
		num10 *= -1;
		i++;
	}
	else if (!num10)
		result[0] = base[0];
	result[i] = '\0';
	i--;
	while (num10 != 0)
	{
		result[i] = base[num10 % nbase];
		num10 /= nbase;
		i--;
	}
}

char	*ft_itoa_tobase(int num10, char *base)
{
	int		lenght;
	int		nbase;
	char	*num_cust;

	nbase = check_base(base);
	if (!nbase)
		return (NULL);
	lenght = ft_ndigit_to(num10, nbase);
	num_cust = malloc(sizeof(char) * lenght + 2);
	ft_putnbr_to(num10, num_cust, base, nbase);
	return (num_cust);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	num10;

	if (!check_base(base_from))
		return (NULL);
	num10 = ft_atoi_base(nbr, base_from);
	return (ft_itoa_tobase(num10, base_to));
}
