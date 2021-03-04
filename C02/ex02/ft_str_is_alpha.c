/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:19:53 by svalenti          #+#    #+#             */
/*   Updated: 2020/10/27 14:53:01 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_alpha(char *str)
{
	int		i;
	bool	valid;
	char	curr;

	i = 0;
	valid = true;
	while (true)
	{
		curr = str[i];
		if (curr == '\0')
		{
			break ;
		}
		if (!((curr >= 'A' && curr <= 'Z') || (curr >= 'a' && curr <= 'z')))
		{
			valid = false;
			break ;
		}
		i++;
	}
	return (valid);
}
