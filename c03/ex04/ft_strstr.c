/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:53:44 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/19 10:55:06 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (to_find[i] != '\0' && *(str + i) != '\0')
		{
			if (*(str + i) != to_find[i])
				break ;
			i++;
		}
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return ('\0');
}
