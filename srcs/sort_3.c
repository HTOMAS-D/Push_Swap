/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:48:25 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/30 09:48:27 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3_a(t_stack **a, t_count *f)
{
	t_stack	*x;
	t_stack	*y;
	t_stack	*z;

	if (!(*a))
		return ;
	z = *a;
	y = z->next;
	x = y->next;
	while (!is_sorted(a))
	{
		if ((x->nbr > y->nbr && x->nbr > z->nbr)
			|| (x->nbr < y->nbr && x->nbr < z->nbr && y->nbr < z->nbr)
			|| (z->nbr < y->nbr && z->nbr < x->nbr))
			sa(a, f);
		else if (z->nbr > y->nbr
			&& z->nbr > x->nbr
			&& y->nbr < x->nbr)
			ra(a, f);
		else if (x->nbr < y->nbr && x->nbr < z->nbr)
			rra(a, f);
	}
}

void	sort_3_b(t_stack **b, t_count *f)
{
	t_stack	*x;
	t_stack	*y;
	t_stack	*z;

	if (!(*b))
		return ;
	z = *b;
	y = z->next;
	x = y->next;
	while (!is_sorted(b))
	{
		if ((x->nbr > y->nbr && x->nbr > z->nbr)
			|| (x->nbr < y->nbr && x->nbr < z->nbr && y->nbr < z->nbr)
			|| (z->nbr < y->nbr && z->nbr < x->nbr))
			sb(b, f);
		else if (z->nbr > y->nbr
			&& z->nbr > x->nbr
			&& y->nbr < x->nbr)
			rb(b, f);
		else if (x->nbr < y->nbr && x->nbr < z->nbr)
			rrb(b, f);
	}
}
