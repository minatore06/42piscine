/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:08:12 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/26 12:22:00 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive(int nb, int i)
{
	if (i > 46340)
		return (0);
	if (i * i == nb)
		return (i);
	if (i - 1 >= nb / 2)
		return (0);
	return (ft_recursive(nb, i + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_recursive(nb, 0));
}
