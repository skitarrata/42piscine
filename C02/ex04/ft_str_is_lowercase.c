/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 16:11:33 by svalenti          #+#    #+#             */
/*   Updated: 2020/10/26 16:23:41 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_lowercase(char *str)
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
		if (!((sh >= 'a' && sh <= 'z')))
		{
			valid = false;
			break ;
		}
		i++;
	}
	return (valid);
}
