/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:30:49 by ylambark          #+#    #+#             */
/*   Updated: 2022/05/24 20:27:13 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexing(t_stab *var)
{
	int	i;
	int	j;
	int	cnt;
	int	*new_tab;

	i = -1;
	j = -1;
	cnt = 0;
	new_tab = (int *)malloc (sizeof(int) * (var->top_a + 1));
	while (++i <= var->top_a)
	{
		j = -1;
		while (++j <= var->top_a)
			if (var->tab_a[j] < var->tab_a[i])
				cnt++;
		new_tab[i] = cnt;
		cnt = 0;
	}
	i = 0;
	while (i <= var->top_a)
	{
		var->tab_a[i] = new_tab[i];
		i++;
	}
	free(new_tab);
}

void	push_sorted_to_b(t_stab *va)
{
	int	chunk;
	int	n;
	int	counter;

	chunk = (va->top_a / 10) + 10;
	n = 1;
	counter = 1;
	while (va->top_a >= 0)
	{
		if (va->tab_a[va->top_a] < chunk * n)
		{
			pb(va->tab_a, &va->top_a, va->tab_b, &va->top_b);
			if (va->tab_b[va->top_b] < (n * chunk) - (chunk / 2))
				rb(va->tab_b, va->top_b, '1');
			counter++;
		}
		else
		{
			while (va->tab_a[va->top_a] >= chunk * n)
				ra(va->tab_a, va->top_a, '1');
		}
		if (counter == chunk * n)
			n++;
	}
}

void	mini(t_stab *va, int *i, int j)
{
	int	find_jj;

	find_jj = -1;
	while (*i <= va->top_b)
	{
		find_jj = find_index(j, va->tab_b, va->top_b);
		if (find_jj >= (va->top_b / 2))
		{
			if (va->tab_b[va->top_b] != j)
				rb(va->tab_b, va->top_b, '1');
		}
		if (find_jj < (va->top_b / 2))
		{
			if (va->tab_b[va->top_b] != j)
				rrb(va->tab_b, va->top_b, '1');
		}
		*i += 1;
	}
}

void	push_sorted_to_a(t_stab *va)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = va->top_b;
	j = va->tab_b[va->top_b];
	while (k + 1)
	{
		i = 0;
		while (i <= va->top_b)
		{
			if (j < va->tab_b[i])
				j = va->tab_b[i];
			i++;
		}
		i = 0;
		mini(va, &i, j);
		pa(va->tab_a, &va->top_a, va->tab_b, &va->top_b);
		j = va->tab_b[va->top_b];
		k--;
	}
}
