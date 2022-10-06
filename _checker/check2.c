/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:30:29 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 10:36:59 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_rr(char **a, int y)
{
	if (a[y] == NULL)
		return (0);
	if (a[y][0] == 'r' && a[y][1] == 'r' && a[y][2] == '\0')
		return (1);
	return (0);
}

int	check_sa(char **a, int y)
{
	if (a[y] == NULL)
		return (0);
	if (a[y][0] == 's' && a[y][1] == 'a')
		return (1);
	return (0);
}

int	check_sb(char **a, int y)
{
	if (a[y] == NULL)
		return (0);
	if (a[y][0] == 's' && a[y][1] == 'b')
		return (1);
	return (0);
}

int	check_ss(char **a, int y)
{
	if (a[y] == NULL)
		return (0);
	if (a[y][0] == 's' && a[y][1] == 's')
		return (1);
	return (0);
}
