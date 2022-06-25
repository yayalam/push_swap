/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:32:06 by ylambark          #+#    #+#             */
/*   Updated: 2022/05/21 17:55:48 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quit(t_stab *va, int c)
{
	if (c == 1 || c == 5)
		ft_putstr("Error\n");
	if (c != 2 && c != 5)
	{
		if (va)
		{
			free(va->tab_a);
			free(va->tab_b);
		}
	}
	exit (0);
}

void	param_to_var(t_stab *va, char **v, int c)
{
	long long	n;
	int			i;

	i = 0;
	va->top_b = -1;
	va->tab_a = (int *)malloc(sizeof(int) * (c - 1));
	va->tab_b = (int *)malloc(sizeof(int) * (c - 1));
	if (!va->tab_a || !va->tab_b)
		quit(va, 1);
	while (v[i])
	{
		n = ft_atoi(v[i], va);
		if (n > 2147483647 || n < -2147483648)
			quit(va, 1);
		va->tab_a[c - i - 2] = (int)n;
		i++;
	}
	va->top_a = i - 1;
}

char	**parc(char **av, char **tmp, int *ac)
{
	int		i;
	char	*tab;

	tab = NULL;
	i = 1;
	if (check_space(av) == 0)
		quit(0, 1);
	while (av[i])
	{
		tab = ft_strjoin(tab, av[i++]);
		tab = ft_strjoin(tab, "  ");
	}
	tmp = ft_split(tab, ' ');
	i = 0;
	free(tab);
	if (!tmp || !*tmp)
		exit (0);
	while (tmp[i])
		i++;
	*ac = i + 1;
	return (tmp);
}

int	main(int ac, char **av)
{
	t_stab	var;
	char	**tmp;

	tmp = NULL;
	qu(ac);
	tmp = parc(av, tmp, &ac);
	if (check_arg(tmp) == 0 || !check_param_empty(av))
		quit(&var, 1);
	param_to_var(&var, tmp, ac);
	if (check_repeat(var.tab_a, var.top_a) == 0)
		quit(&var, 1);
	if (check_if_sorted(var.tab_a, var.top_a) == 0)
		quit(&var, 0);
	if (ac >= 3 && ac <= 6)
	{
		if (ac <= 4)
			sort_3nb(&var, ac);
		if (ac > 4)
			sort_5nb(&var, ac);
		quit(&var, 0);
	}
	indexing(&var);
	push_sorted_to_b(&var);
	push_sorted_to_a(&var);
	quit(&var, 2);
}
