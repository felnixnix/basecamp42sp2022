/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fede-ara <fede-ara@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:00:04 by fede-ara          #+#    #+#             */
/*   Updated: 2022/02/18 20:58:19 by fede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ((str[0] >= 'a' && str[0] <= 'z'))
	{
		str[i] = str[i] - 32;
	}
	while (str[i] != '\0')
	{
		if ((i > 0 && str[i - 1] == ' ') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		else if (i > 0 && str[i - 1] != ' ' && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
