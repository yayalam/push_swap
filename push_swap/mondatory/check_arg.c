/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:29:31 by ylambark          #+#    #+#             */
/*   Updated: 2022/05/22 19:00:15 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	check_space(char **v)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (v[i])
	{
		j = 0;
		while (v[i][j] == ' ')
			j++;
		if (!v[i][j])
			return (0);
		i++;
	}
	return (1);
}

int	check_param_empty(char **v)
{
	int	i;

	i = 1;
	while (v[i])
	{
		if (!v[i][0])
			return (0);
		i++;
	}
	return (1);
}
