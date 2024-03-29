/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:39:18 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/26 15:39:31 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}
