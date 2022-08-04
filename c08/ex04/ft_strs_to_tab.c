/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:31:04 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/08/04 11:04:41 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

struct s_stock_str	conversion(char *str)
{
	int			lenght;
	t_stock_str	el;

	lenght = ft_strlen(str);
	el.size = lenght;
	el.str = str;
	el.copy = malloc(sizeof(int) * (lenght + 1));
	if (!el.copy)
		el.copy = 0;
	else
		ft_strcpy(el.copy, str);
	return (el);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i] = conversion(av[i]);
		if (!tab[i].copy)
			return (0);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
