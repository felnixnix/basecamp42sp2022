/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede-ara <fede-ara@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 19:26:55 by fede-ara          #+#    #+#             */
/*   Updated: 2022/02/05 19:35:30 by fede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	reverse_alphabet;

	reverse_alphabet = 122;
	while (alphabet >= 97)
	{
		write(1, reverse_alphabet, 1);
		reverse_alphabet--;
	}
}
