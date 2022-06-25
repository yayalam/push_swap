/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_r_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:58:58 by ylambark          #+#    #+#             */
/*   Updated: 2022/05/22 19:02:02 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra_b(int *tab_a, int top_a)
{
	int	i;
	int	*tmp;

	tmp = (int *)malloc(sizeof(int) * (top_a + 1));
	if (!tmp)
	{
		free(tab_a);
		exit(0);
	}
	tmp[0] = tab_a[top_a];
	i = top_a;
	while (i > 0)
	{
		tmp[i] = tab_a[i - 1];
		i--;
	}
	i = 0;
	while (i <= top_a)
	{
		tab_a[i] = tmp[i];
		i++;
	}
	free(tmp);
}

void	rb_b(int *t, int top)
{
	int	*tmp;
	int	i;

	i = top;
	tmp = (int *)malloc(sizeof(int) * (top + 1));
	if (!tmp)
	{
		free(t);
		exit(0);
	}
	tmp[0] = t[top];
	while (i > 0)
	{
		tmp[i] = t[i - 1];
		i--;
	}
	i = 0;
	while (i <= top)
	{
		t[i] = tmp[i];
		i++;
	}
	free(tmp);
}

void	rr_b(int *t_a, int top_a, int *t_b, int top_b)
{
	ra_b(t_a, top_a);
	rb_b(t_b, top_b);
}

void	rra_b(int *tab, int top)
{
	int	i;
	int	*tmp;

	tmp = malloc (sizeof(int) * (top + 1));
	if (!tmp)
	{
		free(tab);
		exit(0);
	}
	i = top;
	while (i > 0)
	{
		tmp[i - 1] = tab[i];
		i--;
	}
	tmp[top] = tab[0];
	i = 0;
	while (i <= top)
	{
		tab[i] = tmp[i];
		i++;
	}
	free(tmp);
}

void	rrb_b(int *tab, int top)
{
	int	i;
	int	*tmp;

	tmp = (int *)malloc(sizeof(int) * (top + 1));
	if (!tmp)
	{
		free(tab);
		exit(0);
	}
	i = top;
	while (i > 0)
	{
		tmp[i - 1] = tab[i];
		i--;
	}
	tmp[top] = tab[0];
	i = 0;
	while (i <= top)
	{
		tab[i] = tmp[i];
		i++;
	}
	free(tmp);
}
