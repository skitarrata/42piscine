/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printboard.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:32:11 by acilione          #+#    #+#             */
/*   Updated: 2020/11/01 23:11:32 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_board(int board[4][4])
{
	int rig;
	int col;

	rig = 0;
	col = 0;
	while (rig < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(board[rig][col] + '0');
			(col == 3) ? col++ : ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		rig++;
	}
}
