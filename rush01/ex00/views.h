/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luceduar <luceduar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:03:22 by fede-ara          #+#    #+#             */
/*   Updated: 2022/02/13 21:33:10 by luceduar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEWS_H
# define VIEWS_H

int		viewpoint_up(int *board, int column);
int		viewpoint_down(int *board, int column);
int		viewpoint_left(int *board, int row);
int		viewpoint_right(int *board, int row);

#endif
