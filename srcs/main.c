#include "../includes/push_swap.h"

t_stack	*ft_add(int n)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->nbr = n;
	new->next = NULL;
	return (new);
}

static t_stack	*t_stack_a(char **argv, int argc, int fst)
{
	t_stack	*s;
	t_stack	*first;

	s = NULL;
	first = ft_add(ft_atoi(argv[fst++]));
	first->next = s;
	s = first;
	while (fst != argc)
	{
		s->next = ft_add(ft_atoi(argv[fst]));
		s = s->next;
		fst++;
	}
	s->next = NULL;
	return (first);
}

static void	free_stack(t_stack **s)
{
	t_stack	*this;
	t_stack	*next;

	if (!s)
		return ;
	this = *s;
	while (this)
	{
		next = this->next;
		free(this);
		this = next;
	}
	*s = NULL;
}

static t_count	*init_count(void)
{
	t_count	*new;

	new = malloc(sizeof(t_count));
	new->count = 0;
	return (new);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_count	*f;

	a = NULL;
	b = NULL;
	f = init_count();
	check_args(ac, av);
	a = t_stack_a(av, ac, 1);
	if (!is_sorted(&a))
		try_sort(&a, &b, f);
	if (!is_sorted(&a))
		sort(ac - 1, &a, &b, f);
//	while(a)
//	{
//		ft_printf("%d\n", a->nbr);
//		a = a->next;
//	}
//	ft_printf("count: %d\n", f->count);
	free_stack(&a);
	free(f);
	return (0);
}
