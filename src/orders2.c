/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orders2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:11:19 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 09:39:26 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *data, int write)
{
	if (data->len_b == 0)
		return ;
	data->tab_a[data->len_a] = data->tab_b[data->len_b - 1];
	data->tab_b[data->len_b - 1] = 0;
	data->len_b--;
	data->len_a++;
	if (write == 1)
	{
		data->a[data->count] = malloc(sizeof(char) * 3);
		data->a[data->count][0] = 'p';
		data->a[data->count][1] = 'a';
		data->a[data->count][2] = '\0';
	}
	data->count++;
	return ;
}

void	pb(t_data *data, int write)
{
	if (data->len_a == 0)
		return ;
	data->tab_b[data->len_b] = data->tab_a[data->len_a - 1];
	data->tab_a[data->len_a - 1] = 0;
	data->len_b++;
	data->len_a--;
	if (write == 1)
	{
		data->a[data->count] = malloc(sizeof(char) * 3);
		data->a[data->count][0] = 'p';
		data->a[data->count][1] = 'b';
		data->a[data->count][2] = '\0';
	}
	data->count++;
	return ;
}

void	ra(t_data *data, int write)
{
	int		swap;
	int		i;

	i = data->len_a - 1;
	swap = data->tab_a[data->len_a - 1];
	while (0 < i)
	{
		data->tab_a[i] = data->tab_a[i - 1];
		i--;
	}
	data->tab_a[i] = swap;
	if (write == 1)
	{
		data->a[data->count] = malloc(sizeof(char) * 3);
		data->a[data->count][0] = 'r';
		data->a[data->count][1] = 'a';
		data->a[data->count][2] = '\0';
	}
	data->count++;
	return ;
}

void	rb(t_data *data, int write)
{
	int		swap;
	int		i;

	i = data->len_b - 1;
	swap = data->tab_b[data->len_b - 1];
	while (0 < i)
	{
		data->tab_b[i] = data->tab_b[i - 1];
		i--;
	}
	data->tab_b[i] = swap;
	if (write == 1)
	{
		data->a[data->count] = malloc(sizeof(char) * 3);
		data->a[data->count][0] = 'r';
		data->a[data->count][1] = 'b';
		data->a[data->count][2] = '\0';
	}
	data->count++;
	return ;
}

void	rr(t_data *data, int write)
{
	ra(data, write);
	rb(data, write);
}
