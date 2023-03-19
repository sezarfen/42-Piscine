/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpy.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdundar <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:30:36 by fdundar           #+#    #+#             */
/*   Updated: 2023/02/19 22:30:39 by fdundar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fnc.h"

t_our_dict	init_struct(t_our_dict tmp)
{
	int	i;

	i = 0;
	tmp.dict_index = 0;
	tmp.row_ix = 0;
	tmp.nums_ix = 0;
	tmp.words_ix = 0;
	while (i < 200)
	{
		tmp.nums[i] = -1;
		i++;
	}
	return (tmp);
}

t_our_dict	ft_bringarr(t_our_dict od, char *dict, int border)
{
	while (od.dict_index <= border)
	{
		if (dict[od.dict_index] >= '0' && dict[od.dict_index] <= '9')
			od.numarr[od.row_ix++] = dict[od.dict_index];
		else if (dict[od.dict_index] == ':')
		{
			od.numarr[od.row_ix] = '\0';
			od.row_ix = 0;
			od.nums[od.nums_ix] = ft_atoi(od.numarr);
		}
		else if (dict[od.dict_index] >= 'a' && dict[od.dict_index] <= 'z')
			od.wordarr[od.row_ix++] = dict[od.dict_index];
		else if (dict[od.dict_index] == '\n')
		{
			od.wordarr[od.row_ix] = '\0';
			od.row_ix = 0;
			ft_strcpy(od.words[od.words_ix], od.wordarr);
			od.words_ix++;
			od.nums_ix++;
			clean_arrs(od.numarr, od.wordarr);
		}
		od.dict_index++;
	}
	return (od);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
