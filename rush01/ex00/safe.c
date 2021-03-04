/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 21:44:34 by acilione          #+#    #+#             */
/*   Updated: 2020/11/01 23:11:18 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		col_is_safe(int board[4][4], int col, int num)
{
	int row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int		row_is_safe(int board[4][4], int row, int num)
{
	int col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int		is_safe(int board[4][4], int r, int c, int num)
{
	if (((row_is_safe(board, r, num)) && (col_is_safe(board, c, num))
				&& (board[r][c] == 0)))
		return (1);
	return (0);
}
