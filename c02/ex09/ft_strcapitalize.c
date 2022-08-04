/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 08:42:39 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/18 08:57:09 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_char_is_alpha_num(char ch)
{
	if (ch >= 48 && ch <= 57)
	{
		return (1);
	}
	if (ch >= 65 && ch <= 90)
	{
		return (1);
	}
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		new_word;

	new_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (new_word && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		else if (!new_word && str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		new_word = 0;
		if (!ft_char_is_alpha_num(str[i]))
		{
			new_word = 1;
		}
		i++;
	}
	return (str);
}
