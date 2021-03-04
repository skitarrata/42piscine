/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:39:48 by svalenti          #+#    #+#             */
/*   Updated: 2020/11/05 17:50:04 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						leng(char *str)
{
	int j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

char					*ft_copy(char *str)
{
	int		i;
	char	*copy;

	i = 0;
	if (!(copy = (char *)malloc(sizeof(char) * (leng(str) + 1))))
		return (0);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct		s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str *string;

	i = 0;
	if (!(string = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		string[i].size = leng(av[i]);
		string[i].str = av[i];
		string[i].copy = ft_copy(av[i]);
		i++;
	}
	string[i].str = 0;
	return (string);
}
