/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:43:07 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/26 10:45:08 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	tmp;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	tmp = nb - 1;
	while (tmp > 0)
	{
		nb *= tmp;
		tmp--;
	}
	return (nb);
}
