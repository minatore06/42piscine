/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:29:58 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/19 11:34:03 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		result;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	result = i;
	while (src[result - i] != '\0')
	{
		result++;
	}
	if (size == 0 || size <= (unsigned int)i)
		return ((result - i) + size);
	while (*src != '\0' && (unsigned int)i < size - 1)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return ((unsigned int)result);
}
