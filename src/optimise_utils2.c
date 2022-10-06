/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimise_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:41:36 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 09:55:36 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	optimise_rra(t_data *data, int y)
{
	int	x;

	if (check_rra(data, y))
	{
		x = y;
		y++;
		while (!check_pa(data, y) && !check_pb(data, y) && !check_ra(data, y)
			&& !check_sa(data, y) && data->a[y] != NULL && !check_rra(data, y)
			&& !check_rrr(data, y) && !check_ss(data, y) && !check_rr(data, y))
		{
			if (check_rrb(data, y))
				if (!replace_rrr(data, y, x))
					return (0);
			y++;
		}
	}
	return (1);
}

int	optimise_rrb(t_data *data, int y)
{
	int	x;

	if (check_rrb(data, y))
	{
		x = y;
		y++;
		while (!check_pa(data, y) && !check_pb(data, y) && !check_rb(data, y)
			&& !check_sb(data, y) && data->a[y] != NULL && !check_rrb(data, y)
			&& !check_rrr(data, y) && !check_ss(data, y) && !check_rr(data, y))
		{
			if (check_rra(data, y))
				if (!replace_rrr(data, y, x))
					return (0);
			y++;
		}
	}
	return (1);
}

int	optimise_solution(t_data *data)
{
	int	y;

	y = 0;
	data->a[data->count] = NULL;
	while (data->a[y] != NULL)
	{
		if (!optimise_sa(data, y))
			return (0);
		if (!optimise_sb(data, y))
			return (0);
		if (!optimise_ra(data, y))
			return (0);
		if (!optimise_rb(data, y))
			return (0);
		if (!optimise_rra(data, y))
			return (0);
		if (!optimise_rrb(data, y))
			return (0);
		y++;
	}
	return (1);
}

int	write_solution(t_data *data)
{
	int		i;

	i = 0;
	while (data->a[i] != NULL)
	{
		if (data->a[i][0] == 'p' || data->a[i][0] == 'r'
			|| data->a[i][0] == 's')
			ft_printf("%s\n", data->a[i]);
		i++;
	}
	return (1);
}
