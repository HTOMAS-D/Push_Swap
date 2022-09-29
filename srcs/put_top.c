#include "../includes/push_swap.h"

static char	*move_b(t_stack **b, int nbr)
{
	int	med;

	if (get_size(*b) < 2 || (*b)->nbr == nbr)
		return (NULL);
	med = get_size(*b) / 2;
	if (find_bot_nbr(*b, nbr, med))
		return ("rb");
	return ("rrb");
}

static int	mv_a(t_stack **a, t_stack **b, t_count *f, char *mv_a)
{
	char	*mv_b;

	mv_b = move_b(b, get_biggest(*b));
	if (!mv_b)
		return (1);
	if (!ft_strcmp(mv_a, "ra") && !ft_strcmp(mv_b, "rb"))
	{
		rr(a, b, f);
		return (0);
	}
	if (!ft_strcmp(mv_a, "rra") && !ft_strcmp(mv_b, "rrb"))
	{
		rrr(a, b, f);
		return (0);
	}
	if (!ft_strcmp(mv_b, "rrb"))
		rrb(b, f);
	if (!ft_strcmp(mv_b, "rb"))
		rb(b, f);
	return (1);
}

void	put_range_top_a(t_stack **a, t_stack **b, int v[2], t_count *f)
{
	int	med;
	int	fst;
	int	lst;

	fst = v[0];
	lst = v[0] + v[1];
	if (get_size(*a) < 2
		|| ((*a)->nbr >= fst && (*a)->nbr <= lst))
		return ;
	med = get_size(*a) / 2;
	if (find_top_range(*a, fst, lst, med))
	{
		while (!((*a)->nbr >= fst && (*a)->nbr <= lst))
			if (mv_a(a, b, f, "ra"))
				ra(a, f);
	}
	else
		while (!((*a)->nbr >= fst && (*a)->nbr <= lst))
			if (mv_a(a, b, f, "rra"))
				rra(a, f);
}

void	put_top_a(t_stack **a, t_stack **b, int nbr, t_count *f)
{
	int	med;

	if (get_size(*a) < 2 || (*a)->nbr == nbr)
		return ;
	med = get_size(*a) / 2;
	if (find_bot_nbr(*a, nbr, med))
		while ((*a)->nbr != nbr)
			ra(a, f);
	else
		while ((*a)->nbr != nbr)
			rra(a, f);
}

void	put_top_b(t_stack **a, t_stack **b, int nbr, t_count *f)
{
	int	med;

	if (get_size(*b) < 2 || (*b)->nbr == nbr)
		return ;
	med = get_size(*b) / 2;
	if (find_bot_nbr(*b, nbr, med))
		while ((*b)->nbr != nbr)
			rb(b, f);
	else
		while ((*b)->nbr != nbr)
			rrb(b, f);
}
