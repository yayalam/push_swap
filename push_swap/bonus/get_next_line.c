/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:59:40 by ylambark          #+#    #+#             */
/*   Updated: 2022/05/22 19:01:52 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	mini_bcl(char *str, int fd, int k, char s)
{
	int	i;

	i = 1;
	while (s != '\n' && i != 0)
	{
		i = read(fd, &s, 1);
		if (i == -1)
		{
			free(str);
			return (0);
		}
		if (i != 0)
			str[k++] = s;
		str[k] = '\0';
	}
	return (1);
}

char	*get_next_line(int fd)
{
	char	*str;
	char	s;
	int		k;

	str = NULL;
	s = '\0';
	k = 0;
	if (fd == -1)
		return (0);
	str = (char *)malloc(5);
	if (!str)
		return (0);
	if (mini_bcl(str, fd, k, s) == 0)
		return (0);
	if (!*str || !str)
	{
		free(str);
		return (0);
	}
	return (str);
}

void	rrr_b(int *t_a, int top_a, int *t_b, int top_b)
{
	rra_b(t_a, top_a);
	rrb_b(t_b, top_b);
}
