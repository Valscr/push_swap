/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimise_check2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:38:32 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 09:51:24 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_rra(t_data *data, int y)
{
	if (data->a[y] == NULL)
		return (0);
	if (data->a[y][0] == 'r' && data->a[y][1] == 'r' && data->a[y][2] == 'a')
		return (1);
	return (0);
}

int	check_rrb(t_data *data, int y)
{
	if (data->a[y] == NULL)
		return (0);
	if (data->a[y][0] == 'r' && data->a[y][1] == 'r' && data->a[y][2] == 'b')
		return (1);
	return (0);
}

int	check_rrr(t_data *data, int y)
{
	if (data->a[y] == NULL)
		return (0);
	if (data->a[y][0] == 'r' && data->a[y][1] == 'r' && data->a[y][2] == 'r')
		return (1);
	return (0);
}

int	check_pb(t_data *data, int y)
{	
	if (data->a[y] == NULL)
		return (0);
	if (data->a[y][0] == 'p' && data->a[y][1] == 'b')
		return (1);
	return (0);
}

int	check_pa(t_data *data, int y)
{
	if (data->a[y] == NULL)
		return (0);
	if (data->a[y][0] == 'p' && data->a[y][1] == 'a')
		return (1);
	return (0);
}
