/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede-ara <fede-ara@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:15:02 by fede-ara          #+#    #+#             */
/*   Updated: 2022/02/05 19:24:44 by fede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	alphabet;

	alphabet = 97;
	while (alphabet <= 122)
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}
