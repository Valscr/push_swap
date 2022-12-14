/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:53:36 by valentin          #+#    #+#             */
/*   Updated: 2022/11/20 23:12:46 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_numb(char **argv)
{
	int	i;
	int	y;

	y = 0;
	while (argv[y] != NULL)
	{
		i = 0;
		if (!ft_isdigit(argv[y][i]) && argv[y][0] != '-' && argv[y][0] != '+')
			return (0);
		i++;
		while (argv[y][i] != '\0')
		{
			if (!ft_isdigit(argv[y][i]))
				return (0);
			i++;
		}
		y++;
	}
	return (1);
}

int	pars_arg(char **argv)
{
	if (!check_numb(argv) || !is_int(argv) || !check_double(argv))
		return (0);
	return (1);
}

int	check_double(char **argv)
{
	int	i;
	int	d;
	int	f;

	i = 0;
	while (argv[i] != NULL)
	{
		d = 1;
		f = ft_atoi(argv[i]);
		while (argv[d] != NULL)
		{
			if (f == ft_atoi(argv[d]) && d != i)
				return (0);
			d++;
		}
		i++;
	}
	return (1);
}

int	is_int(char **argv)
{
	if (!is_int1(argv))
		return (0);
	return (1);
}

int	is_int1(char **argv)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (argv[i] != NULL)
	{
		j = ft_atoi(argv[i]);
		if (argv[i][0] == '-')
		{
			if (j > 0 || ft_strlen(argv[i]) > 11)
				return (0);
		}
		else
		{
			if (j < 0 || ft_strlen(argv[i]) > 10)
				return (0);
		}
		i++;
	}
	return (1);
}
