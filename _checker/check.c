/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:53:20 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 10:30:16 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_sort(t_data *data, int	*a, int len)
{
	int	i;

	i = data->len_a - 1;
	if (len <= 1)
		return (0);
	while ((i - 1) >= (data->len_a - len))
	{
		if (a[i] > a[i - 1] && (i - 1) >= (data->len_a - len))
			return (1);
		i--;
	}
	return (0);
}

int	check_pb(char **a, int y)
{	
	if (a[y] == NULL)
		return (0);
	if (a[y][0] == 'p' && a[y][1] == 'b')
		return (1);
	return (0);
}

int	check_pa(char **a, int y)
{
	if (a[y] == NULL)
		return (0);
	if (a[y][0] == 'p' && a[y][1] == 'a')
		return (1);
	return (0);
}

int	check_rb(char **a, int y)
{	
	if (a[y] == NULL)
		return (0);
	if (a[y][0] == 'r' && a[y][1] == 'b')
		return (1);
	return (0);
}

int	check_ra(char **a, int y)
{
	if (a[y] == NULL)
		return (0);
	if (a[y][0] == 'r' && a[y][1] == 'a')
		return (1);
	return (0);
}
