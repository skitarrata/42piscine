/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 11:28:12 by svalenti          #+#    #+#             */
/*   Updated: 2020/11/12 16:47:42 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_operation.h"

void	rec(int nb)
{
	char c;

	if (!nb)
		return ;
	rec(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		rec(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}

int		ft_atoi(char *str)
{
	int i;
	int ret;
	int sign;

	i = 0;
	ret = 0;
	sign = 1;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret *= 10;
		ret += (sign * (str[i++] - '0'));
	}
	return (ret);
}

int		ft_do_op(char *argv, int nbr)
{
	if (argv[0] == '/' && nbr == 0)
	{
		write(1, "Stop : division by zero", 23);
		return (0);
	}
	else if (argv[0] == '%' && nbr == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return (0);
	}
	else if (argv[0] == '+' || argv[0] == '-'
			|| argv[0] == '/' || argv[0] == '*'
			|| argv[0] == '%')
		return (1);
	ft_putnbr(0);
	return (0);
}

int		main(int argc, char **argv)
{
	static char	operator[5] = { '+', '-', '/', '%', '*' };
	static int	(*op[5])(int, int) = {&sum, &min, &div, &mod, &mol};
	int			val1;
	int			val2;

	if (argc == 4)
	{
		val1 = ft_atoi(argv[1]);
		val2 = ft_atoi(argv[3]);
		if (ft_do_op(argv[2], val2) != 0)
		{
			if (*argv[2] == operator[0])
				ft_putnbr((op[0])(val1, val2));
			else if (*argv[2] == operator[1])
				ft_putnbr((op[1])(val1, val2));
			else if (*argv[2] == operator[2])
				ft_putnbr((op[2])(val1, val2));
			else if (*argv[2] == operator[3])
				ft_putnbr((op[3])(val1, val2));
			else if (*argv[2] == operator[4])
				ft_putnbr((op[4])(val1, val2));
		}
		write(1, "\n", 1);
	}
	return (0);
}
