/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:33:24 by ylambark          #+#    #+#             */
/*   Updated: 2022/04/25 21:33:50 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3nb(t_stab *va, int c)
{
	if (c == 3)
	{
		if (check_if_sorted(va->tab_a, va->top_a) != 0)
			sa(va->tab_a, va->top_a, '1');
		return ;
	}
	while (check_if_sorted(va->tab_a, va->top_a) != 0)
	{
		if (va->tab_a[va->top_a] > va->tab_a[(va->top_a) - 1])
		{
			sa(va->tab_a, va->top_a, '1');
			if (check_if_sorted(va->tab_a, va->top_a) != 0)
				rra(va->tab_a, va->top_a, '1');
		}
		else
			rra(va->tab_a, va->top_a, '1');
	}
}

int	find_small(int *t, int top)
{
	int	i;
	int	j;

	i = top;
	j = t[top];
	while (i >= 0)
	{
		if (j > t[i])
			j = t[i];
		i--;
	}
	return (j);
}

int	find_i(int *t, int top, int find)
{
	int	i;

	i = top;
	while (i >= 0)
	{
		if (t[i] == find)
			return (i);
		i--;
	}
	return (-1);
}

void	push_to_b(t_stab *va)
{
	int	j;

	j = find_i(va->tab_a, va->top_a, find_small(va->tab_a, va->top_a));
	if (j == va->top_a)
	{
		pb(va->tab_a, &va->top_a, va->tab_b, &va->top_b);
		return ;
	}
	if (j < va->top_a / 2)
		while (va->tab_a[va->top_a] != find_small(va->tab_a, va->top_a))
			rra(va->tab_a, va->top_a, '1');
	else
		while (va->tab_a[va->top_a] != find_small(va->tab_a, va->top_a))
			ra(va->tab_a, va->top_a, '1');
	pb(va->tab_a, &va->top_a, va->tab_b, &va->top_b);
}

void	sort_5nb(t_stab *va, int c)
{
	push_to_b(va);
	if (c == 6)
		push_to_b(va);
	sort_3nb(va, 4);
	pa(va->tab_a, &va->top_a, va->tab_b, &va->top_b);
	if (c == 6)
		pa(va->tab_a, &va->top_a, va->tab_b, &va->top_b);
}
