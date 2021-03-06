/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:36:56 by svalenti          #+#    #+#             */
/*   Updated: 2020/11/03 17:45:16 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb)
		++i;
	if (i * i == nb)
		return (i);
	return (0);
}
