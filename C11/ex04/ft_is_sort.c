/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:29:25 by svalenti          #+#    #+#             */
/*   Updated: 2020/11/12 14:10:02 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int k;
	int t;

	k = 0;
	while (length-- > 1)
	{
		t = f(tab[length], tab[length - 1]);
		if (t == 0)
			continue;
		if (k == 0)
			k = t;
		else if ((k < 0 && t > 0) || (k > 0 && t < 0))
			return (0);
	}
	return (1);
}
