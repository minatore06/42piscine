/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:51:23 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/08/01 10:51:25 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45 || base[i] == 32
			|| (base[i] >= 9 && base[i] <= 13))
		{
			return (0);
		}
		j = i;
		while (base[++j])
		{
			if (base[i] == base[j])
				return (0);
		}
		i++;
	}
	if (i == 1)
	{
		i = 0;
	}
	return (i);
}

int	ft_isneg(char **str)
{
	int		neg;

	neg = 1;
	while ((**str == 45 || **str == 43) && **str)
	{
		if (**str == 45)
			neg *= -1;
		*str = *str + 1;
	}
	if (neg > 0)
		neg = 0;
	return (neg);
}

int	ft_ndigit(char *str, char *base)
{
	int		digit;
	int		i;
	int		invalid;

	digit = 0;
	while (str[digit])
	{
		i = 0;
		invalid = 1;
		while (base[i])
		{
			if (str[digit] == base[i])
			{
				invalid = 0;
				break ;
			}
			i++;
		}
		if (invalid)
			break ;
		digit++;
	}
	return (digit);
}

int	ft_putnbr(char *str, int digit, char *base, int nbase)
{
	int		x;
	int		i;

	i = 0;
	if (digit == 0)
	{
		return (0);
	}
	while (base[i])
	{
		if (*str == base[i])
		{
			x = i;
		}
		i++;
	}
	i = 0;
	while (i < digit - 1)
	{
		x *= nbase;
		i++;
	}
	return (x + ft_putnbr(str + 1, digit - 1, base, nbase));
}

int	ft_atoi_base(char *str, char *base)
{
	int		result;
	int		neg;
	int		nbase;

	nbase = check_base(base);
	if (!nbase)
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	neg = ft_isneg(&str);
	result = ft_putnbr(str, ft_ndigit(str, base), base, nbase);
	if (neg)
	{
		result = -result;
	}
	return (result);
}
