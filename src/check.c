/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:53:20 by valentin          #+#    #+#             */
/*   Updated: 2022/09/21 18:55:37 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_data *data, int	*a, int len)
{
	int	i;

	i = data->len_a - 1;
	if (len <= 1)
		return (0);
	while ((i - 1) >= (data->len_a - len))
	{
		if (a[i] > a[i - 1] && (i - 1) >= (data->len_a - len))
			return (1);
		i--;
	}
	return (0);
}

int	check_sort_b(t_data *data, int	*a, int len)
{
	int	i;

	i = data->len_b - 1;
	if (len <= 1)
		return (0);
	while ((i - 1) >= (data->len_b - len))
	{
		if (a[i] < a[i - 1] && (i - 1) >= (data->len_b - len))
			return (1);
		i--;
	}
	return (0);
}

int	check_sort_base_a(int	*a, int len)
{
	int	i;

	i = 0;
	if (len <= 1)
		return (0);
	while ((i + 1) < len)
	{
		if (a[i] > a[i + 1] && (i + 1) < len)
			return (1);
		i++;
	}
	return (0);
}

int	check_sort_base_b(int	*a, int len)
{
	int	i;

	i = 0;
	if (len <= 1)
		return (0);
	while ((i + 1) < len)
	{
		if (a[i] < a[i + 1] && (i + 1) < len)
			return (1);
		i++;
	}
	return (0);
}
