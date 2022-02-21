/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luceduar <luceduar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:47:01 by rde-sous          #+#    #+#             */
/*   Updated: 2022/02/13 23:19:24 by luceduar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rotone_main.h"
#include "backtracking.h"
#	define ALLOWED_ARGS 2

int	g_tab_views[GAME_SIZE];

void	start_board(int *board)
{
	int	index;

	index = 0;
	while (index < GAME_SIZE)
	{
		board[index] = 0;
		index++;
	}
}

int	main(int argc, char **argv)
{
	int	board[GAME_SIZE];
	int	result;

	if (argc != ALLOWED_ARGS)
		return (ft_print_error());
	if (!ft_is_valid_arg(argv[1]))
		return (ft_print_error());
	ft_parser_int(argv[1]);
	start_board(board);
	result = solve_board(board, g_tab_views, 0);
	if (result == 0)
		return (ft_print_error());
	print_board(board);
	return (0);
}
