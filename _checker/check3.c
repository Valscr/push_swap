/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:36:26 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 10:36:55 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_rra(char **a, int y)
{
	if (a[y] == NULL)
		return (0);
	if (a[y][0] == 'r' && a[y][1] == 'r' && a[y][2] == 'a')
		return (1);
	return (0);
}

int	check_rrb(char **a, int y)
{
	if (a[y] == NULL)
		return (0);
	if (a[y][0] == 'r' && a[y][1] == 'r' && a[y][2] == 'b')
		return (1);
	return (0);
}

int	check_rrr(char **a, int y)
{
	if (a[y] == NULL)
		return (0);
	if (a[y][0] == 'r' && a[y][1] == 'r' && a[y][2] == 'r')
		return (1);
	return (0);
}
