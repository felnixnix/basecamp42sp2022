/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-sous <rde-sous@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:29:06 by fede-ara          #+#    #+#             */
/*   Updated: 2022/02/14 03:23:48 by rde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "const_game.h"

char	*ft_save_views(int argc, char **argv)
{
	int		i;
	char	*str_args;

	i = 1;
	while (i < argc)
	{
		str_args = argv[i];
		i++;
	}
	return (str_args);
}

int	viewpoint_up(int *board, int column)
{
	int	row;
	int	count;
	int	max;

	count = 0;
	max = 0;
	row = 0;
	while (row < ROWS)
	{
		if (max < board[row * COLS + column])
		{
			count++;
			max = board[row * COLS + column];
		}
		row++;
	}
	return (count);
}

int	viewpoint_down(int *board, int column)
{
	int	row;
	int	count;
	int	max;

	count = 0;
	max = 0;
	row = ROWS - 1;
	while (row >= 0)
	{
		if (max < board[row * COLS + column])
		{
			count++;
			max = board[row * COLS + column];
		}
		row--;
	}
	return (count);
}

int	viewpoint_left(int *board, int row)
{
	int	column;
	int	count;
	int	max;

	count = 0;
	max = 0;
	column = 0;
	while (column < COLS)
	{
		if (max < board[row * COLS + column])
		{
			count++;
			max = board[row * COLS + column];
		}
		column++;
	}
	return (count);
}

int	viewpoint_right(int *board, int row)
{
	int	column;
	int	count;
	int	max;

	count = 0;
	max = 0;
	column = COLS - 1;
	while (column >= 0)
	{
		if (max < board[row * COLS + column])
		{
			count++;
			max = board[row * COLS + column];
		}
		column--;
	}
	return (count);
}
