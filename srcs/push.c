/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:50:44 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/30 09:50:45 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_stack **a, t_stack **b)
{
	t_stack	*aux_a;
	t_stack	*aux_b;

	if (!a)
		return ;
	aux_a = (*a)->next;
	aux_b = *a;
	*a = aux_a;
	aux_b->next = *b;
	*b = aux_b;
}

void	pa(t_stack **a, t_stack **b, t_count *f)
{
	char	n;

	push(b, a);
	write(1, "pa\n", 3);
	f->count = f->count + 1;
}

void	pb(t_stack **a, t_stack **b, t_count *f)
{
	char	n;

	push(a, b);
	write(1, "pb\n", 3);
	f->count = f->count + 1;
}
