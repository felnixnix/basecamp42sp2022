/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:15:49 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/06 19:39:45 by bdi-lell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	column;

	row = 0;
	while (row++ < y)
	{		
		column = 0;
		while (column++ < x)
		{
			if ((row == 1 && column == 1) || (column == x && row == 1))
				ft_putchar('A');
			else if ((column == 1 && row == y) || (row == y && column == x))
				ft_putchar('C');
			else if ((row == 1) || (column == 1) || (column == x) || (row == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
