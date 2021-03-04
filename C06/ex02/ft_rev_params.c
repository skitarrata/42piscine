/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:40:34 by svalenti          #+#    #+#             */
/*   Updated: 2020/11/02 18:12:11 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			while (*argv[i])
				ft_putstr(*argv[i]++);
			ft_putstr('\n');
			i--;
		}
	}
	return (0);
}
