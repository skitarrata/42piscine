/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:00:01 by svalenti          #+#    #+#             */
/*   Updated: 2020/10/23 11:05:37 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 48;
	while (num1 <= 57)
	{
		num2 = num1 + 1;
		while (num2 <= 57)
		{
			num3 = num2 + 1;
			while (num3 <= 57)
			{
				write(1, &num1, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				if (num1 + 1 != num2 || num2 + 1 != num3 || num3 != 57)
					write(1, ", ", 2);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
