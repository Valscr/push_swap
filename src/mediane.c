/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mediane.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:58:05 by valentin          #+#    #+#             */
/*   Updated: 2022/09/21 19:32:33 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_med_b(t_data *data, int len)
{
	int	i;
	int	*a;

	a = sort_tab_b(data, len);
	if (a == NULL)
		return (0);
	if (len % 2 == 0)
	{	
		i = (len / 2) - 1;
		data->med = a[i];
		free(a);
		return (1);
	}
	i = ((len + 1) / 2) - 1;
	data->med = a[i];
	free(a);
	return (1);
}

int	find_med_a(t_data *data, int len)
{
	int	i;
	int	*a;

	a = sort_tab_a(data, len);
	if (a == NULL)
		return (0);
	if ((len) % 2 == 0)
	{
		i = len / 2;
		data->med = a[i];
		free(a);
		return (1);
	}
	i = ((len + 1) / 2) - 1;
	data->med = a[i];
	free(a);
	return (1);
}
