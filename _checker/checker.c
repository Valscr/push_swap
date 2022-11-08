/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:17:36 by valentin          #+#    #+#             */
/*   Updated: 2022/11/08 16:09:56 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	copy_tab2(char **str, t_data *data)
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

int	check_split2(char **argv, int argc, t_data *data)
{
	if (argc < 2)
		return (0);
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

int	check_seq(char **a, t_data *checker)
{
	int	i;

	i = 0;
	while (a[i])
	{
		if (check_pa(a, i) || check_pb(a, i)
			|| check_ra(a, i) || check_rb(a, i)
			|| check_rr(a, i) || check_rra(a, i)
			|| check_rrb(a, i) || check_rrr(a, i)
			|| check_sa(a, i) || check_sb(a, i)
			|| check_ss(a, i))
		{
			i++;
		}
		else
		{
			ft_printf("KO\n");
			free_str(checker->argv);
			return (0);
		}
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	**a;
	t_data	checker;

	init_data2(&checker);
	a = ft_split(get_next_line(STDIN_FILENO), '\n');
	if (!a)
		return (0);
	if (!check_split2(argv, argc, &checker) || !check_seq(a, &checker))
	{
		free_str(a);
		return (0);
	}
	if (!pars_arg(checker.argv) || !copy_tab2(checker.argv, &checker))
	{
		ft_printf("Error\n");
		free_str(a);
		return (free_str(checker.argv));
	}
	exec(a, &checker);
	if (!check_sort(&checker, checker.tab_a, checker.nb))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free_str(a);
	return (free_all(&checker));
}
