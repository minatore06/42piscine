/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scaiazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:22:00 by scaiazzo          #+#    #+#             */
/*   Updated: 2022/08/02 15:22:46 by scaiazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef enum s_bool
{
	true = 1,
	false = 0,
}t_bool;

# define TRUE true
# define FALSE false
# define SUCCESS 0
# define EVEN(num) (num % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
#endif
