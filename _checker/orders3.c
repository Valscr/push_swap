/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orders3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:12:35 by valentin          #+#    #+#             */
/*   Updated: 2022/09/23 15:00:35 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rrb(t_data *data, int write)
{
	int		swap;
	int		i;

	i = 0;
	swap = data->tab_b[0];
	while (i < (data->len_b - 1))
	{
		data->tab_b[i] = data->tab_b[i + 1];
		i++;
	}
	data->tab_b[i] = swap;
	if (write == 1)
		ft_printf("rrb\n");
	return ;
}

void	rra(t_data *data, int write)
{
	int		swap;
	int		i;

	i = 0;
	swap = data->tab_a[0];
	while ((i + 1) < (data->len_a))
	{
		data->tab_a[i] = data->tab_a[i + 1];
		i++;
	}
	data->tab_a[i] = swap;
	if (write == 1)
		ft_printf("rra\n");
	return ;
}

void	rrr(t_data *data, int write)
{
	rra(data, write);
	rrb(data, write);
}
