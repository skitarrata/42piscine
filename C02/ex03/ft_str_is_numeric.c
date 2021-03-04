/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:40:43 by svalenti          #+#    #+#             */
/*   Updated: 2020/10/26 16:07:00 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	bool	valid;
	char	st;

	i = 0;
	valid = true;
	while (true)
	{
		st = str[i];
		if (st == 0)
		{
			break ;
		}
		if (!((st >= 48 && st <= 57)))
		{
			valid = false;
			break ;
		}
		i++;
	}
	return (valid);
}
