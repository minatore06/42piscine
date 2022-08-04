/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:40:35 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/19 15:41:08 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_whilespace(char **str)
{
	while (**str == 32 || (**str >= 9 && **str <= 13))
		*str = *str + 1;
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

int	ft_ndigit(char *str)
{
	int		digit;

	digit = 0;
	while (str[digit] && str[digit] >= 48 && str[digit] <= 57)
	{
		digit++;
	}
	return (digit);
}

int	ft_putnbr(char *str, int digit)
{
	int		x;
	int		i;

	i = 0;
	if (digit == 0)
		return (0);
	x = *str - 48;
	while (i < digit - 1)
	{
		x *= 10;
		i++;
	}
	return (x + ft_putnbr(str + 1, digit - 1));
}

int	ft_atoi(char *str)
{
	int		result;
	int		neg;

	ft_whilespace(&str);
	neg = ft_isneg(&str);
	result = ft_putnbr(str, ft_ndigit(str));
	if (neg)
		result = -result;
	return (result);
}
