/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede-ara <fede-ara@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:55:45 by fede-ara          #+#    #+#             */
/*   Updated: 2022/02/17 03:04:41 by fede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	char	x;
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		x = str[count];
		write(1, &x, 1);
		count++;
	}	
}
