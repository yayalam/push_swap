/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <ylambark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:00:31 by ylambark          #+#    #+#             */
/*   Updated: 2022/05/20 16:26:08 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

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

void		sa_b(int *t, int top);
void		ss_b(int *t_a, int top_a, int *t_b, int top_b);
void		sb_b(int *t, int top);
void		pb_b(int *t_a, int *top_a, int *t_b, int *top_b);
void		pa_b(int *t_a, int *top_a, int *t_b, int *top_b);
void		ra_b(int *tab_a, int top_a);
void		rb_b(int *t, int top);
void		rr_b(int *t_a, int top_a, int *t_b, int top_b);
void		rrb_b(int *tab, int top);
void		rra_b(int *tab, int top);
void		rrr_b(int *t_a, int top_a, int *t_b, int top_b);
long long	ft_atoi(char *str, t_stab *var, char **v);
void		ft_putstr(char *s);
int			check_arg(char **v);
int			check_repeat(int *t, int top);
char		**ft_split(char *s, char c, char **p);
int			ft_strlen(char *s);
char		*ft_strjoin(char *s1, char *s2);
int			check_space(char **v);
int			ft_strcmp(char *s1, char *s2);
void		quit_b(t_stab *va, int c, char **v, char *j);
char		*get_next_line(int fd);
int			check(int *t, int top);
char		**fret(char **p);
int			check_param_empty(char **v);

#endif
