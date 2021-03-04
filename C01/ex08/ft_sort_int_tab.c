/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:14:45 by svalenti          #+#    #+#             */
/*   Updated: 2020/10/24 16:48:35 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int cont;
	int c;
	int i;

	i = 0;
	while (i < size)
	{
		cont = i + 1;
		while (cont < size)
		{
			if (tab[i] > tab[cont])
			{
				c = tab[i];
				tab[i] = tab[cont];
				tab[cont] = c;
			}
			cont++;
		}
		i++;
	}
}
