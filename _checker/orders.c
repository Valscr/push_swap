/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orders.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:24:42 by valentin          #+#    #+#             */
/*   Updated: 2022/09/23 15:00:24 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_data *data, int write)
{
	int		swap;

	if (data->len_a < 2)
		return ;
	swap = data->tab_a[data->len_a - 1];
	data->tab_a[data->len_a - 1] = data->tab_a[data->len_a - 2];
	data->tab_a[data->len_a - 2] = swap;
	if (write == 1)
		ft_printf("sa\n");
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
		ft_printf("sb\n");
	return ;
}

void	ss(t_data *data, int write)
{
	sa(data, write);
	sb(data, write);
}
