/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 00:15:57 by valentin          #+#    #+#             */
/*   Updated: 2022/10/04 10:01:29 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort1_3(t_data *data, int len, int write)
{
	if (len == 2)
	{
		if (data->tab_a[data->len_a - 2] < data->tab_a[data->len_a - 1])
			sa(data, write);
	}
	else if (len == 3)
	{
		if (data->tab_a[data->len_a - 1] > data->tab_a[data->len_a - 2]
			&& data->tab_a[data->len_a - 1] > data->tab_a[data->len_a - 3])
		{
			sa(data, write);
			ra(data, write);
			sa(data, write);
			rra(data, write);
		}
		else if (data->tab_a[data->len_a - 2] > data->tab_a[data->len_a - 1]
			&& data->tab_a[data->len_a - 2] > data->tab_a[data->len_a - 3])
		{
			ra(data, write);
			sa(data, write);
			rra(data, write);
		}
		if (data->tab_a[data->len_a - 1] > data->tab_a[data->len_a - 2])
			sa(data, write);
	}
}

int	sort_3_b(t_data *data, int len, int write)
{	
	if (data->len_b - len == 0)
	{
		if (len == 1)
			pa(data, write);
		else if (len == 2)
		{
			if (data->tab_b[data->len_b - 1] < data->tab_b[data->len_b - 2])
				sb(data, write);
			pa(data, write);
			pa(data, write);
		}
		else if (len == 3)
			sort_3_b3(data, write);
	}
	else
		sort1_3_b(data, len, write);
	return (1);
}

void	sort_3_b3(t_data *data, int write)
{
	if (data->tab_b[data->len_b - 1] > data->tab_b[data->len_b - 2]
		&& data->tab_b[data->len_b - 1] > data->tab_b[data->len_b - 3])
		pa(data, write);
	else if (data->tab_b[data->len_b - 2] > data->tab_b[data->len_b - 1]
		&& data->tab_b[data->len_b - 2] > data->tab_b[data->len_b - 3])
	{
		rb(data, write);
		pa(data, write);
	}
	else if (data->tab_b[data->len_b - 3] > data->tab_b[data->len_b - 1]
		&& data->tab_b[data->len_b - 3] > data->tab_b[data->len_b - 2])
	{
		rrb(data, write);
		pa(data, write);
	}
	if (data->tab_b[data->len_b - 2] > data->tab_b[data->len_b - 1])
		sb(data, write);
	pa(data, write);
	pa(data, write);
}

void	sort1_3_b(t_data *data, int len, int write)
{	
	if (len == 1)
		pa(data, write);
	else if (len == 2)
	{
		if (data->tab_b[data->len_b - 1] < data->tab_b[data->len_b - 2])
			sb(data, write);
		pa(data, write);
		pa(data, write);
	}
	else if (len == 3)
		sort1_3_b3(data, write);
}

void	sort1_3_b3(t_data *data, int write)
{
	if (data->tab_b[data->len_b - 1] > data->tab_b[data->len_b - 2]
		&& data->tab_b[data->len_b - 1] > data->tab_b[data->len_b - 3])
		pa(data, write);
	else if (data->tab_b[data->len_b - 2] > data->tab_b[data->len_b - 1]
		&& data->tab_b[data->len_b - 2] > data->tab_b[data->len_b - 3])
	{
		rb(data, write);
		pa(data, write);
		rrb(data, write);
	}
	else if (data->tab_b[data->len_b - 3] > data->tab_b[data->len_b - 1]
		&& data->tab_b[data->len_b - 3] > data->tab_b[data->len_b - 2])
	{
		rb(data, write);
		sb(data, write);
		pa(data, write);
		rrb(data, write);
	}
	if (data->tab_b[data->len_b - 2] > data->tab_b[data->len_b - 1])
		sb(data, write);
	pa(data, write);
	pa(data, write);
}
