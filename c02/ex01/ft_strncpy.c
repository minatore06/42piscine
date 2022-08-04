/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:52:05 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/17 14:54:05 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		null;
	int		i;

	i = 0;
	null = 0;
	while ((unsigned int)i < n)
	{
		if (src[i] == '\0')
		{
			null = 1;
		}
		if (null)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
		i++;
	}
	return (dest);
}
