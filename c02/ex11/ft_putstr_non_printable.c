/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:24:45 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/18 10:31:20 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	out[2];
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			out[0] = "0123456789abcdef"[(unsigned char)str[i] / 16];
			out[1] = "0123456789abcdef"[(unsigned char)str[i] % 16];
			write(1, out, 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
