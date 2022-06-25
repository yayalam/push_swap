/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:33:56 by ylambark          #+#    #+#             */
/*   Updated: 2022/04/25 21:34:42 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index(int big, int *tab, int top)
{
	int	i;

	i = 0;
	while (i <= top)
	{
		if (tab[i] == big)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

long long	ft_atoi(char *str, t_stab *var)
{
	int			i;
	long long	r;
	long long	k;

	i = 0;
	r = 0;
	k = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] < '0' || str[i + 1] > '9')
			quit(var, 1);
		if (str[i] == '-')
			k *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + ((long long)str[i] - 48);
		i++;
	}
	return (r * k);
}

void	qu(int c)
{
	if (c < 2)
		exit(0);
}

int	check_if_sorted(int *t, int top)
{
	int	i;
	int	j;

	i = 0;
	while (i < top)
	{
		j = i + 1;
		while (j <= top)
		{
			if (t[i] < t[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
