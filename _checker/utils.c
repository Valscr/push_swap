/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:58:47 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 10:34:18 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	get_len(char **list)
{
	int	i;

	i = 0;
	while (list[i] != NULL)
		i++;
	return (i);
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

int	free_str(char **a)
{
	int	i;

	i = 0;
	while (a[i] != NULL)
		free(a[i++]);
	free(a);
	return (0);
}

int	free_all(t_data *data)
{
	free(data->tab_a);
	free(data->tab_b);
	free_str(data->argv);
	return (0);
}

void	init_data2(t_data *data)
{
	data->len_a = 0;
	data->len_b = 0;
	data->nb = 0;
	data->med = 0;
	data->argv = NULL;
	data->tab_a = NULL;
	data->tab_b = NULL;
	return ;
}
