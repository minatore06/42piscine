/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <scaiazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:25:52 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/13 16:12:56 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 96;
	while (alphabet++ < 122)
	{	
		write(1, &alphabet, 1);
	}
}
