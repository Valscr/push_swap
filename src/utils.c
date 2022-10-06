/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:58:47 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 13:06:33 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_len(char **list)
{
	int	i;

	i = 0;
	while (list[i] != NULL)
		i++;
	return (i);
}

int	copy_tab(char **str, t_data *data)
{
	int	i;
	int	j;
	int	d;

	i = 0;
	j = get_len(str);
	data->tab_a = malloc(sizeof(int) * (j));
	if (!data->tab_a)
		return (0);
	d = j - 1;
	while (i < j)
	{
		data->tab_a[i] = ft_atoi(str[d--]);
		i++;
	}
	data->len_a = j;
	data->nb = j;
	data->tab_b = malloc(sizeof(int) * (data->len_a));
	if (!data->tab_b)
		return (0);
	return (1);
}

int	copy_argv(char **argv, t_data *data)
{
	int	i;
	int	y;
	int	d;

	y = 1;
	d = 0;
	data->argv = malloc(sizeof(char *) * (get_len(argv)));
	if (!data->argv)
		return (0);
	while (argv[y] != NULL)
	{
		i = -1;
		data->argv[d] = malloc(sizeof(char) * (ft_strlen(argv[y]) + 1));
		if (!data->argv[d])
			return (0);
		while (argv[y][++i] != '\0')
			data->argv[d][i] = argv[y][i];
		data->argv[d++][i] = '\0';
		y++;
	}
	data->argv[d] = NULL;
	return (1);
}

int	check_split(char **argv, int argc, t_data *data)
{
	if (argc == 2)
	{
		data->argv = ft_split(argv[1], ' ');
		if (data->argv == NULL)
			return (0);
	}
	else if (argc > 2)
	{
		if (!copy_argv(argv, data))
			return (0);
	}
	return (1);
}

int	free_str(char **a)
{
	int	i;

	i = 0;
	while (a[i] != NULL)
		free(a[i++]);
	free(a);
	return (0);
}
