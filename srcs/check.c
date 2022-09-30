/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:48:09 by htomas-d          #+#    #+#             */
/*   Updated: 2022/09/30 10:41:18 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	check_each(char *arg)
{
	int	min;
	int	max;

	min = -2147483648;
	max = 2147483647;
	if (!ft_strcmp(arg, "0"))
		return (1);
	if (ft_atoi(arg) == 0 || ft_atoi(arg) > max || ft_atoi(arg) < min)
		return (0);
	return (1);
}

static int	check_dup(int ac, char **av, int i, int j)
{
	while (i != ac)
	{
		if (i != j && ft_atoi(av[i]) == ft_atoi(av[j]))
			return (0);
		i++;
	}
	return (1);
}

void	check_args(int ac, char **av)
{
	int	fst;
	int	i;

	i = 1;
	if (ac == 1)
		exit(0);
	fst = i;
	while (i != ac)
	{
		if (!check_each(av[i]) || !check_dup(ac, av, fst, i))
		{
			write (1, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}
