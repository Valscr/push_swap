/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimise_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:37:23 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 09:40:33 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_rb(t_data *data, int y)
{	
	if (data->a[y] == NULL)
		return (0);
	if (data->a[y][0] == 'r' && data->a[y][1] == 'b')
		return (1);
	return (0);
}

int	check_ra(t_data *data, int y)
{
	if (data->a[y] == NULL)
		return (0);
	if (data->a[y][0] == 'r' && data->a[y][1] == 'a')
		return (1);
	return (0);
}

int	check_rr(t_data *data, int y)
{	
	if (data->a[y] == NULL)
		return (0);
	if (data->a[y][0] == 'r' && data->a[y][1] == 'r' && data->a[y][2] == '\0')
		return (1);
	return (0);
}

int	check_sa(t_data *data, int y)
{
	if (data->a[y] == NULL)
		return (0);
	if (data->a[y][0] == 's' && data->a[y][1] == 'a')
		return (1);
	return (0);
}

int	check_sb(t_data *data, int y)
{
	if (data->a[y] == NULL)
		return (0);
	if (data->a[y][0] == 's' && data->a[y][1] == 'b')
		return (1);
	return (0);
}
