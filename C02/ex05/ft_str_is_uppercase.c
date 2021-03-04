/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:26:06 by svalenti          #+#    #+#             */
/*   Updated: 2020/10/27 14:25:01 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_uppercase(char *str)
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
		if (!((sh >= 'A' && sh <= 'Z')))
		{
			valid = false;
			break ;
		}
		i++;
	}
	return (valid);
}
