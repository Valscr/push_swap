/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:58:20 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 12:38:52 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

typedef struct s_data {
	int		*tab_a;
	int		*tab_b;
	int		len_a;
	int		len_b;
	int		med;
	int		nb;
	char	**argv;
}				t_data;

int		get_len(char **list);
int		copy_argv(char **argv, t_data *data);
int		check_split(char **argv, int argc, t_data *data);
int		free_str(char **a);
int		check_sort(t_data *data, int *a, int len);
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
int		check_end(char *dest);
char	*ft_strjoin1(char *s1, char *s2);
char	*get_next(char *save, int fd);
char	*get_next_line(int fd);
int		get_size(char *s1, char *s2);
int		free_all(t_data *data);
void	init_data2(t_data *data);
int		check_pb(char **a, int y);
int		check_pa(char **a, int y);
int		check_rb(char **a, int y);
int		check_ra(char **a, int y);
int		check_rr(char **a, int y);
int		check_sa(char **a, int y);
int		check_sb(char **a, int y);
int		check_ss(char **a, int y);
int		check_rra(char **a, int y);
int		check_rrb(char **a, int y);
int		check_rrr(char **a, int y);
int		exec(char **a, t_data *checker);
int		exec2(char **a, t_data *checker, int i);
int		check_numb(char **argv);
int		pars_arg(char **argv);
int		check_double(char **argv);
int		is_int(char **argv);
int		is_int1(char **argv);

#endif
