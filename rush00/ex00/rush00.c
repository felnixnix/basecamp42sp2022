/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdi-lell <bdi-lell@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:15:43 by bdi-lell          #+#    #+#             */
/*   Updated: 2022/02/06 19:38:31 by bdi-lell         ###   ########.fr       */
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
				ft_putchar('o');
			else if ((column == 1 && row == y) || (row == y && column == x))
				ft_putchar('o');
			else if (row == 1 || row == y)
				ft_putchar('-');
			else if ((column == 1) || (column == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
