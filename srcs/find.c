/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:45:50 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/30 09:45:52 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_stack_range(t_stack *s, int first, int last)
{
	int	i;

	i = 1;
	while (s)
	{
		if (s->nbr >= first && s->nbr <= last)
			return (i);
		i++;
		s = s->next;
	}
	return (0);
}

int	find_bot_nbr(t_stack *s, int n, int med)
{
	int	i;

	i = 0;
	while (s && i <= med)
	{
		if (s->nbr == n)
			return (1);
		i++;
		s = s->next;
	}
	return (0);
}

int	find_top_range(t_stack *s, int fst, int lst, int med)
{
	int	i;

	i = 0;
	while (s && i <= med)
	{
		if (s->nbr >= fst && s->nbr <= lst)
			return (i);
		i++;
		s = s->next;
	}
	return (-1);
}
