/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:15:27 by acilione          #+#    #+#             */
/*   Updated: 2020/11/01 23:12:14 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_sintax(char *input)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] == '4')
			count++;
		i++;
	}
	if (count > 2)
		return (0);
	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] == '1')
			count++;
		i++;
	}
	if (count != 4)
		return (0);
	return (1);
}

int		correct_input(char *arg, int *input)
{
	int i;
	int out;

	i = 0;
	out = 0;
	if (check_sintax(arg) == 1)
	{
		while (arg[i])
		{
			if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == 32)
						|| ((arg[i + 1] == 0))))
			{
				input[out] = (arg[i] - '0');
				out++;
				i++;
			}
			if ((arg[i] >= 9 && arg[i] <= 13) || arg[i] == 32)
				i++;
			else
				return (out);
		}
		input[out] = '\0';
		return (out);
	}
	return (0);
}
