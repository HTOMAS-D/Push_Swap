/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:45:37 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/30 09:45:39 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	top_smaller_than_bot(t_stack *bott, t_stack *top)
{
	t_stack	*first_top;

	first_top = top;
	while (bott != first_top)
	{
		top = first_top;
		while (top)
		{
			if (top->nbr > bott->nbr)
				return (0);
			top = top->next;
		}
		bott = bott->next;
	}
	return (1);
}

static int	top_bigger_than_bot(t_stack *bott, t_stack *top)
{
	t_stack	*first_top;

	first_top = top;
	while (bott != first_top)
	{
		top = first_top;
		while (top)
		{
			if (top->nbr < bott->nbr)
				return (0);
			top = top->next;
		}
		bott = bott->next;
	}
	return (1);
}

static int	something_sorted_top(t_stack **a, t_stack *s)
{
	if (!top_smaller_than_bot(*a, s))
		return (0);
	while (s->next)
	{
		if (s->next->nbr < s->nbr)
			return (0);
		s = s->next;
	}
	return (1);
}

static int	something_sorted(t_stack **a)
{
	t_stack	*aux;

	aux = *a;
	while (aux->next)
	{
		if (aux->next->nbr < aux->nbr)
			return (something_sorted_top(a, aux->next));
		aux = aux->next;
	}
	return (0);
}

void	try_sort(t_stack **a, t_stack **b, t_count *f)
{
	if (something_sorted(a))
		return (put_top_a(a, b, get_smallest(*a), f));
	if (*a && (*a)->next && (*a)->next->next && is_sorted(&(*a)->next->next)
		&& top_bigger_than_bot(*a, (*a)->next->next))
		sa(a, f);
}
