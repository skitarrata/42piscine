/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:51:01 by svalenti          #+#    #+#             */
/*   Updated: 2020/11/11 09:44:13 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_leng(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		size;
	char	*tmp;

	i = 1;
	size = ft_leng(tab);
	while (i < size)
	{
		j = 0;
		while (++j < size)
		{
			if (cmp(tab[j - 1], tab[j]) > 0)
			{
				tmp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = tmp;
			}
		}
		i++;
	}
}
