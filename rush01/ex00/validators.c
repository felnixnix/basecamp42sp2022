/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-sous <rde-sous@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:36:54 by rde-sous          #+#    #+#             */
/*   Updated: 2022/02/13 23:40:24 by rde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "const_game.h"
#include "utility.h"
//

int	ft_is_space(char c)
{
	return (c == ' ');
}

int	ft_is_valid_nb(char c)
{
	return (c >= '1' && c <= '4');
}

int	ft_is_valid_format(char *str)
{
	char	c;
	int		valid_count_n_args;	
	int		i;

	valid_count_n_args = 0;
	i = 0;
	c = str[i];
	while (c != '\0' && i < (GAME_SIZE * 2 - 1))
	{
		if (i % 2 == 0)
		{
			if (ft_is_valid_nb(c))
			valid_count_n_args++;
			else
				return (0);
		}
		else if (!ft_is_space(c))
			return (0);
		i++;
		c = str[i];
	}
	if (valid_count_n_args != GAME_SIZE)
		return (0);
	return (1);
}

int	ft_is_valid_arg(char *str)
{
	const int	expected_len = GAME_SIZE * 2 - 1;
	int			is_valid_len;

	is_valid_len = count_str_len(str) == expected_len;
	return (is_valid_len && ft_is_valid_format(str));
}
