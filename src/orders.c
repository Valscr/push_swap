/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orders.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:24:42 by valentin          #+#    #+#             */
/*   Updated: 2022/10/05 20:47:14 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data, int write)
{
	int		swap;

	if (data->len_a < 2)
		return ;
	swap = data->tab_a[data->len_a - 1];
	data->tab_a[data->len_a - 1] = data->tab_a[data->len_a - 2];
	data->tab_a[data->len_a - 2] = swap;
	if (write == 1)
	{
		data->a[data->count] = malloc(sizeof(char) * 3);
		data->a[data->count][0] = 's';
		data->a[data->count][1] = 'a';
		data->a[data->count][2] = '\0';
	}
	data->count++;
	return ;
}

void	sb(t_data *data, int write)
{
	int		swap;

	if (data->len_b < 2)
		return ;
	swap = data->tab_b[data->len_b - 1];
	data->tab_b[data->len_b - 1] = data->tab_b[data->len_b - 2];
	data->tab_b[data->len_b - 2] = swap;
	if (write == 1)
	{
		data->a[data->count] = malloc(sizeof(char) * 3);
		data->a[data->count][0] = 's';
		data->a[data->count][1] = 'b';
		data->a[data->count][2] = '\0';
	}
	data->count++;
	return ;
}

void	ss(t_data *data, int write)
{
	sa(data, write);
	sb(data, write);
}
