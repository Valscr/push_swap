/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimise_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:39:53 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 09:42:12 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_ss(t_data *data, int y)
{
	if (data->a[y] == NULL)
		return (0);
	if (data->a[y][0] == 's' && data->a[y][1] == 's')
		return (1);
	return (0);
}

int	optimise_sa(t_data *data, int y)
{
	int	x;

	if (check_sa(data, y))
	{
		x = y;
		y++;
		while (!check_pa(data, y) && !check_pb(data, y) && !check_ra(data, y)
			&& !check_rra(data, y) && data->a[y] != NULL && !check_sa(data, y)
			&& !check_rrr(data, y) && !check_ss(data, y) && !check_rr(data, y))
		{
			if (check_sb(data, y))
				if (!replace_ss(data, y, x))
					return (0);
			y++;
		}
	}
	return (1);
}

int	optimise_sb(t_data *data, int y)
{
	int	x;

	if (check_sb(data, y))
	{
		x = y;
		y++;
		while (!check_pa(data, y) && !check_pb(data, y) && !check_rb(data, y)
			&& !check_rrb(data, y) && data->a[y] != NULL && !check_sb(data, y)
			&& !check_rrr(data, y) && !check_ss(data, y) && !check_rr(data, y))
		{
			if (check_sa(data, y))
				if (!replace_ss(data, y, x))
					return (0);
			y++;
		}
	}
	return (1);
}

int	optimise_ra(t_data *data, int y)
{
	int	x;

	if (check_ra(data, y))
	{
		x = y;
		y++;
		while (!check_pa(data, y) && !check_pb(data, y) && !check_rra(data, y)
			&& !check_sa(data, y) && data->a[y] != NULL && !check_ra(data, y)
			&& !check_rrr(data, y) && !check_ss(data, y) && !check_rr(data, y))
		{
			if (check_rb(data, y))
				if (!replace_rr(data, y, x))
					return (0);
			y++;
		}
	}
	return (1);
}

int	optimise_rb(t_data *data, int y)
{
	int	x;

	if (check_rb(data, y))
	{
		x = y;
		y++;
		while (!check_pa(data, y) && !check_pb(data, y) && !check_rrb(data, y)
			&& !check_sb(data, y) && data->a[y] != NULL && !check_rb(data, y)
			&& !check_rrr(data, y) && !check_ss(data, y) && !check_rr(data, y))
		{
			if (check_ra(data, y))
				if (!replace_rr(data, y, x))
					return (0);
			y++;
		}
	}
	return (1);
}
