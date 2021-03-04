/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acilione <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:38:07 by acilione          #+#    #+#             */
/*   Updated: 2020/11/01 23:10:46 by acilione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkboard(int board[4][4], int *in_num);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	check_sintax(char *input);
void	print_board(int board[4][4]);
void	look_for_ones(int board[4][4], int *input);
void	look_for_fours(int board[4][4], int *input);
int		correct_input(char *arg, int *input);
int		col_is_safe(int board[4][4], int col, int num);
int		row_is_safe(int	board[4][4], int col, int num);
int		is_safe(int board[4][4], int r, int c, int num);
int		init_board(int *input);

int		there_are_zeroes(int board[4][4], int *r, int *c)
{
	*r = 0;
	*c = 0;
	while (*r < 4)
	{
		*c = 0;
		while (*c < 4)
		{
			if (board[*r][*c] == 0)
				return (1);
			*c += 1;
		}
		*r += 1;
	}
	return (0);
}

int		fill_board(int board[4][4], int *input)
{
	int row;
	int col;
	int i;
	int n;

	i = 0;
	n = 1;
	if ((there_are_zeroes(board, &row, &col) == 0) && (checkboard(board, input) == 1))
		return (1);
	while (n <= 4)
	{
		if (is_safe(board, row, col, n))
		{
			board[row][col] = n;
			if (fill_board(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int input[16];
	int i;
	int k;

	i = 0;
	k = 0;
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	i = correct_input(argv[1], input);
	if (i == 16)
		init_board(input);
	else
		ft_putstr("Error\n");
}
