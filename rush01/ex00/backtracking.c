/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luceduar <luceduar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:03:28 by luceduar          #+#    #+#             */
/*   Updated: 2022/02/13 23:17:07 by luceduar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "const_game.h"
#include "views.h"
#include "utility.h"

int	find_number_in_row(int *board, int number, int element)
{
	int	row;
	int	column;

	row = element / 4;
	column = element % 4 - 1;
	while (column >= 0)
	{
		if (number == board[row * 4 + column])
			return (1);
		column--;
	}
	return (0);
}

int	find_number_in_column(int *board, int number, int element)
{
	int	row;
	int	column;

	row = element / 4 - 1;
	column = element % 4;
	while (row >= 0)
	{
		if (number == board[row * 4 + column])
			return (1);
		row--;
	}
	return (0);
}

int	*get_options(int *board, int element, int *dest)
{
	int	value;

	value = 1;
	while (value <= 4)
	{
		if (find_number_in_column(board, value, element)
			|| find_number_in_row(board, value, element))
			dest[value - 1] = 0;
		else
			dest[value - 1] = 1;
		value++;
	}
	return (dest);
}

int	check_board(int *board, int *viewpoints)
{
	int	index;
	int	viewpoint;
	int	element;

	index = 0;
	while (index < GAME_SIZE)
	{
		viewpoint = index / 4;
		element = index % 4;
		if (viewpoint == 0
			&& viewpoints[index] != viewpoint_up(board, element))
			return (0);
		else if (viewpoint == 1
			&& viewpoints[index] != viewpoint_down(board, element))
			return (0);
		else if (viewpoint == 2
			&& viewpoints[index] != viewpoint_left(board, element))
			return (0);
		else if (viewpoint == 3
			&& viewpoints[index] != viewpoint_right(board, element))
			return (0);
		index++;
	}
	return (1);
}

int	solve_board(int *board, int *viewpoints, int element)
{
	int	index;
	int	options[4];

	get_options(board, element, options);
	index = 0;
	while (index < 4)
	{
		if (options[index] == 1)
		{
			board[element] = index + 1;
			if (element == 15)
				return (check_board(board, viewpoints));
			if (solve_board(board, viewpoints, element + 1) == 1)
				return (1);
		}
		index++;
	}
	return (0);
}
