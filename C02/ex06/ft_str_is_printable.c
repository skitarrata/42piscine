/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:30:14 by svalenti          #+#    #+#             */
/*   Updated: 2020/10/27 14:26:04 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	bool	valid;
	char	sh;

	i = 0;
	valid = true;
	while (true)
	{
		sh = str[i];
		if (sh == '\0')
		{
			break ;
		}
		if (!((sh >= 32 && sh <= 127)))
		{
			valid = false;
			break ;
		}
		i++;
	}
	return (valid);
}
