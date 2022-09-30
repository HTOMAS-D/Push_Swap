/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:45:11 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/30 09:45:15 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_5(t_stack **a, t_stack **b, t_count *f)
{
	while (get_size(*a) > 3)
	{
		put_top_a(a, b, get_smallest(*a), f);
		pb(a, b, f);
	}
	sort_3_a(a, f);
	while (get_size(*b) > 0)
	{
		put_top_b(a, b, get_biggest(*b), f);
		pa(a, b, f);
	}
	put_top_a(a, b, get_smallest(*a), f);
}
