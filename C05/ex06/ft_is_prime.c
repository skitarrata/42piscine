/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:50:42 by svalenti          #+#    #+#             */
/*   Updated: 2020/10/29 17:15:07 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int cont;
	int div;

	cont = 0;
	div = 1;
	if (nb <= 0)
		return (0);
	while (cont < 3 && div <= nb / 2)
	{
		if (nb % div == 0)
			cont++;
		div++;
	}
	if (cont == 1)
		return (1);
	else
		return (0);
}
