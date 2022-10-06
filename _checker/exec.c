/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:32:23 by valentin          #+#    #+#             */
/*   Updated: 2022/10/06 10:37:56 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	exec2(char **a, t_data *checker, int i)
{
	if (check_rra(a, i))
		rra(checker, 0);
	else if (check_rrb(a, i))
		rrb(checker, 0);
	else if (check_rrr(a, i))
		rrr(checker, 0);
	return (0);
}

int	exec(char **a, t_data *checker)
{
	int	i;

	i = -1;
	while (a[++i] != NULL)
	{
		if (check_pb(a, i))
			pb(checker, 0);
		else if (check_pa(a, i))
			pa(checker, 0);
		else if (check_ra(a, i))
			ra(checker, 0);
		else if (check_rb(a, i))
			rb(checker, 0);
		else if (check_rr(a, i))
			rr(checker, 0);
		else if (check_sb(a, i))
			sb(checker, 0);
		else if (check_sa(a, i))
			sa(checker, 0);
		else if (check_ss(a, i))
			ss(checker, 0);
		else
			exec2(a, checker, i);
	}
	return (0);
}
