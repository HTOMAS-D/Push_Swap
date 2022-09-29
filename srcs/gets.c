#include "../includes/push_swap.h"

int	get_size(t_stack *s)
{
	int	i;

	i = 0;
	while (s)
	{
		s = s->next;
		i++;
	}
	return (i);
}

int	get_biggest(t_stack *s)
{
	int	i;

	if (!s)
		return (0);
	i = s->nbr;
	while (s->next)
	{
		s = s->next;
		if (s->nbr > i)
			i = s->nbr;
	}
	return (i);
}

int	get_smallest(t_stack *s)
{
	int	i;

	i = s->nbr;
	while (s)
	{
		s = s->next;
		if (s && s->nbr < i)
			i = s->nbr;
	}
	return (i);
}
