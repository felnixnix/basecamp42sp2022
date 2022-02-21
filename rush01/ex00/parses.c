/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parses.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luceduar <luceduar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:17:47 by rde-sous          #+#    #+#             */
/*   Updated: 2022/02/13 23:35:05 by luceduar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "const_game.h"
#include "utility.h"
#include "validators.h"

extern int	g_tab_views[GAME_SIZE];

void	ft_parser_int(char *str)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	c = str[i];
	while (c != '\0' && i < (GAME_SIZE * 2 - 1))
	{
		if (ft_is_valid_nb(c))
		{
			g_tab_views[j] = c - '0';
			j++;
		}
		i++;
		c = str[i];
	}
}
