/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:48:28 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 13:15:54 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_data(t_data *data)
{
	data->len_a = 0;
	data->len_b = 0;
	data->nb = 0;
	data->med = 0;
	data->count = 0;
	data->argv = NULL;
	data->tab_a = NULL;
	data->tab_b = NULL;
	data->a = NULL;
	return ;
}

int	push_swap_b(t_data *data, int len, int w)
{
	int	i;
	int	d;

	d = 0;
	if (!check_sort_b(data, data->tab_b, len))
		while (len--)
			pa(data, w);
	if (len <= 3)
		return (sort_3_b(data, len, w));
	i = len;
	if (!find_med_b(data, len))
		return (0);
	while (len > i / 2)
	{
		if (data->tab_b[data->len_b - 1] >= data->med && (len--))
			pa(data, w);
		else if (++d)
			rb(data, w);
	}
	while (i / 2 < data->len_b && d--)
		rrb(data, w);
	return (push_swap_a(data, i / 2 + i % 2, w) && push_swap_b(data, i / 2, w));
}

int	push_swap_a(t_data *data, int len, int w)
{
	int	i;
	int	d;

	d = 0;
	if (!check_sort(data, data->tab_a, len))
		return (1);
	if (len <= 3)
		return (sort_3(data, len, w));
	i = len;
	if (!find_med_a(data, len))
		return (0);
	while (len > i / 2 + i % 2)
	{
		if (data->tab_a[data->len_a - 1] < data->med && (len--))
			pb(data, w);
		else if (++d)
			ra(data, w);
	}
	while ((i / 2 + i % 2) < data->len_a && d--)
		rra(data, w);
	return (push_swap_a(data, i / 2 + i % 2, w) && push_swap_b(data, i / 2, w));
	return (1);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 2)
		return (0);
	init_data(&data);
	if (!check_split(argv, argc, &data))
		return (0);
	if (!pars_arg(data.argv) || !copy_tab(data.argv, &data))
	{
		ft_printf("Error\n");
		return (free_str(data.argv));
	}
	if (!push_swap_a(&data, data.len_a, 0) || !init2(&data))
		return (free_all(&data));
	if (!copy_tab(data.argv, &data) || !push_swap_a(&data, data.len_a, 1)
		|| !optimise_solution(&data) || !write_solution(&data))
	{
		free_str(data.a);
		return (free_all(&data));
	}
	free_all(&data);
	return (free_str(data.a));
}
