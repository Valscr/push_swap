/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:19:11 by vescaffr          #+#    #+#             */
/*   Updated: 2022/11/19 15:34:15 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

typedef struct s_data {
	int		*tab_a;
	int		*tab_b;
	int		len_a;
	int		len_b;
	int		med;
	int		nb;
	int		count;
	char	**argv;
	char	**a;
}				t_data;

int		push_swap_b(t_data *data, int len, int write);
int		push_swap_a(t_data *data, int len, int write);
int		find_med_b(t_data *data, int len);
int		find_med_a(t_data *data, int len);
void	init_data(t_data *data);
int		check_double(char **argv);
int		get_len(char **list);
int		copy_tab(char **str, t_data *data);
int		copy_argv(char **argv, t_data *data);
int		check_split(char **argv, int argc, t_data *data);
int		is_int(char **argv);
int		is_int1(char **argv);
int		pars_arg(char **argv);
int		check_numb(char **argv);
int		*get_tab_int(int *tab, int len, int len_tab);
int		*sort_tab_a(t_data *data, int len);
int		*sort_tab_b(t_data *data, int len);
int		sort_3(t_data *data, int len, int write);
void	sort1_3(t_data *data, int len, int write);
int		sort_3_b(t_data *data, int len, int write);
void	sort_3_b3(t_data *data, int write);
void	sort1_3_b(t_data *data, int len, int write);
void	sort1_3_b3(t_data *data, int write);
int		check_sort(t_data *data, int	*a, int len);
int		check_sort_b(t_data *data, int	*a, int len);
int		check_sort_base_a(int	*a, int len);
int		check_sort_base_b(int	*a, int len);
int		free_str(char **a);
int		free_all(t_data *data);
void	sa(t_data *data, int write);
void	sb(t_data *data, int write);
void	ss(t_data *data, int write);
void	pb(t_data *data, int write);
void	pa(t_data *data, int write);
void	ra(t_data *data, int write);
void	rb(t_data *data, int write);
void	rr(t_data *data, int write);
void	rrb(t_data *data, int write);
void	rra(t_data *data, int write);
void	rrr(t_data *data, int write);
int		optimise_solution(t_data *data);
int		write_solution(t_data *data);
int		init2(t_data *data);
int		replace_rrr(t_data *data, int y, int x);
int		replace_rr(t_data *data, int y, int x);
int		replace_ss(t_data *data, int y, int x);
int		check_rb(t_data *data, int y);
int		check_ra(t_data *data, int y);
int		check_rr(t_data *data, int y);
int		check_sa(t_data *data, int y);
int		check_sb(t_data *data, int y);
int		check_rra(t_data *data, int y);
int		check_rrb(t_data *data, int y);
int		check_rrr(t_data *data, int y);
int		check_pb(t_data *data, int y);
int		check_pa(t_data *data, int y);
int		check_ss(t_data *data, int y);
int		optimise_sa(t_data *data, int y);
int		optimise_sb(t_data *data, int y);
int		optimise_ra(t_data *data, int y);
int		optimise_rb(t_data *data, int y);
int		optimise_rra(t_data *data, int y);
int		optimise_rrb(t_data *data, int y);
void	write_error(char *str);

#endif
