/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initboard.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:05:49 by acilione          #+#    #+#             */
/*   Updated: 2020/11/01 23:08:57 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		there_are_zeroes(int board[4][4], int *r, int *c);
int		checkboard(int board[4][4], int *input);
void	look_for_ones(int board[4][4], int *input);
void	look_for_fours_one(int board[4][4], int *input);
void	print_board(int board[4][4]);
void	look_for_fours_one(int board[4][4], int *input);
void	look_for_fours_two(int borad[4][4], int *input);
void	fill_board(int board[4][4], int *input);

int		init_board(int *input)
{
	int		row;
	int		col;
	int		board[4][4];

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	look_for_ones(board, input);
	look_for_fours_one(board, input);
	look_for_fours_two(board, input);
	fill_board(board, input);
	print_board(board);
	return (0);
}

void	look_for_ones(int board[4][4], int *input)
{
	int ind;

	ind = 0;
	while (input[ind])
	{
		if ((input[ind] == 1) && ((ind >= 0) && (ind <= 3)))
			board[0][ind] = 4;
		if ((input[ind] == 1) && ((ind >= 4) && (ind <= 7)))
			board[3][ind - 4] = 4;
		if ((input[ind] == 1) && ((ind >= 8) && (ind <= 11)))
			board[ind - 8][0] = 4;
		if ((input[ind] == 1) && ((ind >= 12) && (ind <= 15)))
			board[ind - 12][3] = 4;
		ind++;
	}
	return ;
}

void	look_for_fours_one(int board[4][4], int *input)
{
	int pos;
	int idx;

	pos = 0;
	idx = 0;
	while (pos < 8)
	{
		if ((input[pos] == 4) && ((pos >= 0 && pos <= 3)))
			while (idx < 4)
			{
				board[idx][pos] = idx + 1;
				idx++;
			}
		idx = 4;
		if ((input[pos] == 4) && ((pos >= 4 && pos <= 7)))
			while (idx > 0)
			{
				board[4 - idx][(pos % 4)] = idx;
				idx--;
			}
		pos++;
	}
}

void	look_for_fours_two(int board[4][4], int *input)
{
	int pos;
	int idx;

	pos = 8;
	idx = 0;
	while (pos < 16)
	if ((input[pos] == 4) && ((pos >= 8 && pos <= 11)))
		while (idx < 4)
		{
			board[pos % 4][idx] = idx + 1;
			idx++;
		}
	idx = 4;
	if ((input[pos] == 4) && ((pos >= 12 && pos <= 15)))
		while (idx > 0)
		{
			board[pos % 4][4 - idx] = idx;
			idx--;
		}
	pos++;
}
