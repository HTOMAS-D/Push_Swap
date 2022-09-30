/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:50:05 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/30 09:50:07 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_more(t_stack **a, t_stack **b, int div, t_count *f)
{
	int	v[2];

	v[0] = get_smallest(*a);
	v[1] = get_biggest(*a) / div;
	while (get_size(*a) && v[0] < get_biggest(*a))
	{
		while (find_stack_range(*a, v[0], v[0] + v[1]))
		{
			put_range_top_a(a, b, v, f);
			pb(a, b, f);
		}
		v[0] += v[1];
	}
	while (get_size(*a))
		pb(a, b, f);
	while (get_size(*b))
	{
		put_top_b(a, b, get_biggest(*b), f);
		pa(a, b, f);
	}
}
