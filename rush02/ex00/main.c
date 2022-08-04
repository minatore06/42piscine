/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:25:30 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/07/31 20:25:34 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "t_Number.h"

int	file_to_str(char *dict, char *number, int i);

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = -1;
	j = argc - 1;
	while (argv[j][++i])
	{
		if (argv[j][i] < '0' || argv[j][i] > '9' || argv[j][0] == '-')
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	if (argc == 2)
	{
		if (!file_to_str("numbers.dict", argv[1], 0))
			return (0);
	}
	else if (argc == 3)
	{
		if (!file_to_str(argv[1], argv[2], 0))
			return (0);
	}
	write(1, "\n", 1);
	return (0);
}
