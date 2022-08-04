/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:45:18 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/30 09:46:11 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		len;
	int		i;

	len = max - min;
	if (len <= 0)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * len);
	if (!(*range))
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}
