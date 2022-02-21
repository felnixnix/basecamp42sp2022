/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luceduar <luceduar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:36:30 by fede-ara          #+#    #+#             */
/*   Updated: 2022/02/13 22:55:26 by luceduar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

void	print_board(int *board)
{
	int	x;
	int	count;

	count = 0;
	while (count < 16)
	{
		x = board[count] + '0';
		ft_putchar(x);
		if (count % 4 == 3)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		count++;
	}
}
