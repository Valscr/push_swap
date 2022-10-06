/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:54:53 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 09:44:53 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_tab_int(int *tab, int len, int len_tab)
{
	int	*a;
	int	i;
	int	y;

	y = len - 1;
	i = len_tab - 1;
	a = malloc(sizeof(int) * len);
	if (!a)
		return (NULL);
	while (i >= (len_tab - len))
		a[y--] = tab[i--];
	return (a);
}

int	*sort_tab_a(t_data *data, int len)
{
	int	i;
	int	swap;
	int	*a;

	a = get_tab_int(data->tab_a, len, data->len_a);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (check_sort_base_a(a, len))
	{
		while (i < (len - 1))
		{
			if (a[i] > a[i + 1] && (i + 1) < (len))
			{
				swap = a[i];
				a[i] = a[i + 1];
				a[i + 1] = swap;
			}
			i++;
		}
		i = 0;
	}
	return (a);
}

int	*sort_tab_b(t_data *data, int len)
{
	int	i;
	int	swap;
	int	*a;

	a = get_tab_int(data->tab_b, len, data->len_b);
	i = 0;
	while (check_sort_base_b(a, len))
	{
		while ((i + 1) < len)
		{
			if (a[i] < a[i + 1] && (i + 1) < (len))
			{
				swap = a[i];
				a[i] = a[i + 1];
				a[i + 1] = swap;
			}
			i++;
		}
		i = 0;
	}
	return (a);
}

int	sort_3(t_data *data, int len, int write)
{
	if (data->len_a - len == 0)
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
				ra(data, write);
			else if (data->tab_a[data->len_a - 2] > data->tab_a[data->len_a - 1]
				&& data->tab_a[data->len_a - 2] > data->tab_a[data->len_a - 3])
				rra(data, write);
			if (data->tab_a[data->len_a - 1] > data->tab_a[data->len_a - 2])
				sa(data, write);
		}
	}
	else
		sort1_3(data, len, write);
	return (1);
}
