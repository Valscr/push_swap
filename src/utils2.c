/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:35:42 by valentin          #+#    #+#             */
/*   Updated: 2022/10/10 16:41:02 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init2(t_data *data)
{
	data->a = malloc(sizeof(char *) * (data->count + 2));
	if (!data->a)
		return (0);
	data->count = 0;
	free(data->tab_a);
	free(data->tab_b);
	data->len_b = 0;
	data->nb = 0;
	data->med = 0;
	return (1);
}

int	free_all(t_data *data)
{
	if (data->tab_a)
		free(data->tab_a);
	if (data->tab_b)
		free(data->tab_b);
	free_str(data->argv);
	return (0);
}

int	replace_rrr(t_data *data, int y, int x)
{
	free(data->a[y]);
	data->a[y] = malloc(sizeof(char) * 4);
	if (!data->a[y])
		return (0);
	data->a[y][0] = 'r';
	data->a[y][1] = 'r';
	data->a[y][2] = 'r';
	data->a[y][3] = '\0';
	data->a[x][0] = '1';
	return (1);
}

int	replace_rr(t_data *data, int y, int x)
{
	free(data->a[y]);
	data->a[y] = malloc(sizeof(char) * 3);
	if (!data->a[y])
		return (0);
	data->a[y][0] = 'r';
	data->a[y][1] = 'r';
	data->a[y][2] = '\0';
	data->a[x][0] = '1';
	return (1);
}

int	replace_ss(t_data *data, int y, int x)
{
	free(data->a[y]);
	data->a[y] = malloc(sizeof(char) * 3);
	if (!data->a[y])
		return (0);
	data->a[y][0] = 's';
	data->a[y][1] = 's';
	data->a[y][2] = '\0';
	data->a[x][0] = '1';
	return (1);
}
