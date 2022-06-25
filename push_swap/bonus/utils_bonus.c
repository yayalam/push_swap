/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:03:31 by ylambark          #+#    #+#             */
/*   Updated: 2022/05/22 19:01:05 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

long long	ft_atoi(char *str, t_stab *var, char **v)
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
			quit_b(var, 1, v, 0);
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

int	check_arg(char **v)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (!v || !*v)
		return (0);
	while (v[i])
	{
		j = 0;
		while (v[i][j])
		{
			if (j == 0 && (v[i][j] == '-' || v[i][j] == '+'))
				j++;
			if ((v[i][j] < '0' || v[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_repeat(int *t, int top)
{
	int	i;
	int	j;

	i = 0;
	while (i < top)
	{
		j = i + 1;
		while (j <= top)
		{
			if (t[i] == t[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check(int *t, int top)
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
