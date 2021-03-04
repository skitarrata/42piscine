/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 10:42:22 by svalenti          #+#    #+#             */
/*   Updated: 2020/11/03 15:46:54 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int c;

	c = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power-- > 0)
	{
		c *= nb;
	}
	return (c);
}
