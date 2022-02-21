/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luceduar <luceduar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:22:33 by rde-sous          #+#    #+#             */
/*   Updated: 2022/02/13 23:02:45 by luceduar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int *tab)
{
	int	i;
	int	n;

	n = 16;
	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		ft_putchar(' ');
		i++;
	}
	ft_putchar ('\n');
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '0')
	{
		ft_putchar(str[i]);
		if (i != 15)
			ft_putchar(' ');
		i++;
	}
}

int	count_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_print_error(void)
{
	write(1, "Error\n", 6);
	return (2);
}
