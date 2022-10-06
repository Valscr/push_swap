/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orders2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:11:19 by valentin          #+#    #+#             */
/*   Updated: 2022/09/23 15:00:21 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pa(t_data *data, int write)
{
	if (data->len_b == 0)
		return ;
	data->tab_a[data->len_a] = data->tab_b[data->len_b - 1];
	data->tab_b[data->len_b - 1] = 0;
	data->len_b--;
	data->len_a++;
	if (write == 1)
		ft_printf("pa\n");
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
		ft_printf("pb\n");
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
		ft_printf("ra\n");
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
		ft_printf("rb\n");
	return ;
}

void	rr(t_data *data, int write)
{
	ra(data, write);
	rb(data, write);
}
