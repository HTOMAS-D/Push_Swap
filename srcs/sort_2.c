#include "../includes/push_swap.h"

void	sort_2_a(t_stack **a, t_count *f)
{
	if (!is_sorted(a))
		sa(a, f);
	return ;
}

void	sort_2_b(t_stack **b, t_count *f)
{
	if (!is_sorted(b))
		sb(b, f);
	return ;
}
