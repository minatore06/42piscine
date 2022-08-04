/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:00:13 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/30 10:06:26 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	strs_lenght(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		len += j;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	len += 1 + (i * (size - 1));
	return (len);
}

char	*make_str(char *str, int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;

	i = -1;
	len = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[len] = strs[i][j];
			j++;
			len++;
		}
		j = 0;
		while (sep[j] && i != size -1)
		{
			str[len] = sep[j];
			j++;
			len++;
		}
	}
	str[len] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;

	if (size == 0)
		return (malloc(0));
	len = strs_lenght(size, strs, sep);
	str = malloc(sizeof(char) * len);
	return (make_str(str, size, strs, sep));
}
