/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:50:34 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/30 09:50:35 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap(t_stack **s)
{
	int		aux;

	aux = (*s)->nbr;
	(*s)->nbr = (*s)->next->nbr;
	(*s)->next->nbr = aux;
}

void	sa(t_stack **a, t_count *f)
{
	char	n;

	swap(a);
	write(1, "sa\n", 3);
	f->count = f->count + 1;
}

void	sb(t_stack **b, t_count *f)
{
	char	n;

	swap(b);
	write(1, "sb\n", 3);
	f->count = f->count + 1;
}

void	ss(t_stack **a, t_stack **b, t_count *f)
{
	char	n;

	swap(a);
	swap(b);
	write(1, "ss\n", 3);
	f->count = f->count + 1;
}
