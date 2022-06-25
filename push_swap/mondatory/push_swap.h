/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:35:28 by ylambark          #+#    #+#             */
/*   Updated: 2022/05/24 21:56:07 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct stab
{
	int	*tab_a;
	int	*tab_b;
	int	top_a;
	int	top_b;
}t_stab;

void		sa(int *t, int top, char cn);
void		sb(int *t, int top, char cn);
void		ss(int *t_a, int top_a, int *t_b, int top_b);
void		pb(int *t_a, int *top_a, int *t_b, int *top_b);
void		pa(int *t_a, int *top_a, int *t_b, int *top_b);
void		ra(int *tab_a, int top_a, char c);
void		rb(int *t, int top, char c);
void		rr(int *t_a, int top_a, int *t_b, int top_b);
void		rra(int *tab, int top, char c);
void		rrb(int *tab, int top, char c);
void		quit(t_stab *va, int c);
void		ft_putstr(char *s);
void		ft_putchar(char c);
long long	ft_atoi(char *str, t_stab *var);
char		*ft_strjoin(char *s1, char *s2);
int			ft_strlen(char *s);
int			check_arg(char **v);
int			check_repeat(int *t, int top);
int			check_space(char **v);
int			find_index(int big, int *tab, int top);
void		indexing(t_stab *var);
void		push_sorted_to_b(t_stab *var);
void		qu(int c);
char		**parc(char **v, char **tmp, int *c);
void		sort_3nb(t_stab *var, int c);
int			check_if_sorted(int *t, int top);
void		sort_5nb(t_stab *var, int c);
void		push_to_b(t_stab *va);
int			find_i(int *t, int top, int find);
char		**ft_split(char *s, char c);
void		push_sorted_to_a(t_stab *var);
void		mini(t_stab *var, int *i, int j);
int			check_param_empty(char **v);

#endif
