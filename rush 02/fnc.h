/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fnc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdundar <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:31:07 by fdundar           #+#    #+#             */
/*   Updated: 2023/02/19 22:31:08 by fdundar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FNC_H
# define FNC_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int			ft_atoi(char *str);

char		*ft_itoa(int num);

void		clean_arrs(char *nums, char *words);

void		ft_strcpy(char *dest, char *src);

char		*start_dict(void);

char		*start_difdict(char *ndict);
typedef struct s_our_dict
{
	int		dict_index;
	int		row_ix;
	char	numarr[200];
	int		nums[200];
	int		nums_ix;
	char	wordarr[100];
	char	words[100][100];
	int		words_ix;
}			t_our_dict;
t_our_dict	init_struct(t_our_dict tmp);
t_our_dict	ft_bringarr(t_our_dict od, char *dict, int border);

int			ft_power(int nbr, int power);

int			ft_strlen(char *str);

int			*ft_parse_nest(char *argv, int *numbers, int k, int i);

int			ft_parse_2(char *str, int *numbers, int k, int i);

int			*ft_parse_number(int mynum);

int			find_in_nums(int num, t_our_dict od);

char		*turn_to_word(int index, t_our_dict od);

char		*ft_match(int pars_nums, t_our_dict od);

void		ft_putchar(char c);

void		ft_putstr(char *str);

void		ft_putoword(int *numbers, t_our_dict od);

void		start_program(t_our_dict od, int mynum, char *dict);

#endif
