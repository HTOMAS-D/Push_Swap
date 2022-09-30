/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:51:29 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/30 10:44:05 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/ft_printf.h"
# include <limits.h>

typedef struct s_stack
{
	int				nbr;
	struct s_stack	*next;
}	t_stack;

typedef struct s_count
{
	int		count;
}	t_count;

//CHECK.C done
void			check_args(int ac, char **av);
static int		check_each(char *arg);
static int		check_dup(int ac, char **av, int i, int j);

//IS_SORTED.C done
int				is_sorted(t_stack **a);
void			sort(int ac, t_stack **a, t_stack **b, t_count *f);

//SWAP.C done
static void		swap(t_stack **stack);
void			sa(t_stack **a, t_count *f);
void			sb(t_stack **b, t_count *f);
void			ss(t_stack **a, t_stack **b, t_count *f);

//PUSH.C done
void			push(t_stack **a, t_stack **b);
void			pa(t_stack **a, t_stack **b, t_count *f);
void			pb(t_stack **a, t_stack **b, t_count *f);

//ROTATE.C done
static void		rotate(t_stack **stack);
void			ra(t_stack **a, t_count *f);
void			rb(t_stack **b, t_count *f);
void			rr(t_stack **a, t_stack **b, t_count *f);

//REVROTATE.C done
static void		revrotate(t_stack **stack);
void			rra(t_stack **a, t_count *f);
void			rrb(t_stack **b, t_count *f);
void			rrr(t_stack **a, t_stack **b, t_count *f);

//SORT_2.C done
void			sort_2_a(t_stack **a, t_count *f);
void			sort_2_b(t_stack **b, t_count *f);

//SORT_3.C done
void			sort_3_a(t_stack **a, t_count *f);
void			sort_3_b(t_stack **b, t_count *f);

//SORT_5.C done
void			sort_5(t_stack **a, t_stack **b, t_count *f);

//GETS.C done
int				get_size(t_stack *a);
int				get_smallest(t_stack *a);
int				get_biggest(t_stack *a);

//PUT_TOP.C done
void			put_top_a(t_stack **a, t_stack **b, int nbr, t_count *f);
void			put_top_b(t_stack **a, t_stack **b, int nbr, t_count *f);
void			put_range_top_a(t_stack **a, t_stack **b, int i[2], t_count *f);
static int		mv_a(t_stack **a, t_stack **b, t_count *f, char *mv_a);
static char		*move_b(t_stack **b, int nbr);

//FIND.C done 
int				find_bot_nbr(t_stack *s, int n, int med);
int				find_stack_range(t_stack *s, int start, int end);
int				find_top_range(t_stack *s, int fst, int lst, int med);

//SORT_MORE.C done
void			sort_more(t_stack **a, t_stack **b, int div, t_count *f);

//TRY_SORT.C done
void			try_sort(t_stack **a, t_stack **b, t_count *f);
static int		something_sorted(t_stack **a);
static int		something_sorted_top(t_stack **a, t_stack *s);
static int		top_bigger_than_bot(t_stack *bot, t_stack *top);
static int		top_smaller_than_bot(t_stack *bot, t_stack *top);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_atoi(const char *str);
#endif
