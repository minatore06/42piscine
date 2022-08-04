/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:50:28 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/27 14:57:07 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	lenght;

	lenght = 0;
	(void) argc;
	while (argv[0][lenght])
		lenght++;
	write(1, argv[0], lenght);
	return (0);
}
