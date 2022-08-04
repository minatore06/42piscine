/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:07:58 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/08/01 16:08:24 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		lenght;

	lenght = 0;
	while (str[lenght])
		lenght++;
	return (lenght);
}

int	check_sep(char *str, char *separator)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[j] && separator[i])
	{
		if (str[j] == separator[i])
		{
			j++;
			i = 0;
		}
		else
			i++;
	}
	if (j > 0)
		return (j);
	return (0);
}

int	count_words(char *str, char *separator)
{
	int		words;
	int		i;
	int		j;
	int		wasj;

	words = 0;
	wasj = 1;
	i = 0;
	j = 0;
	while (str[i])
	{
		j = check_sep(&str[i], separator);
		if (!j && wasj)
		{
			words++;
			wasj = 0;
		}
		else if (j)
			wasj = 1;
		i++;
	}
	return (words);
}

void	actual_split(char **strs, char *str, char *separator, int i)
{
	int		start;
	int		k;
	int		j;

	start = 0;
	while (str[i])
	{
		j = check_sep(&str[i], separator);
		if (j || (!j && !str[i + 1]))
		{
			if (!j)
				i++;
			if (i != start)
			{
				*strs = malloc(sizeof(char) * (i - start + 1));
				k = 0;
				while (start < i)
					(*strs)[k++] = str[start++];
				(*strs++)[k] = '\0';
			}
			i += j;
			start += j;
		}
		else
			i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**strs;

	words = count_words(str, charset);
	strs = malloc(sizeof(char *) * (words + 1));
	strs[words] = NULL;
	if (words)
		actual_split(strs, str, charset, 0);
	return (strs);
}
