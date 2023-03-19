/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdundar <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:31:33 by fdundar           #+#    #+#             */
/*   Updated: 2023/02/19 22:31:35 by fdundar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnc.h"

int	find_in_nums(int num, t_our_dict od)
{
	int	index;

	index = 0;
	while (index < 100)
	{
		if (num == od.nums[index])
			return (index);
		index++;
	}
	return (-1);
}

char	*turn_to_word(int index, t_our_dict od)
{
	char	*str;

	str = od.words[index];
	return (str);
}

char	*ft_match(int pars_nums, t_our_dict od)
{
	int		i;
	int		x;
	char	*reads;
	char	*a;

	reads = (char *) malloc (100);
	a = (char *) malloc (300);
	i = 0;
	x = find_in_nums(pars_nums, od);
	a = turn_to_word(x, od);
	ft_strcpy(reads, a);
	return (a);
}

void	ft_putoword(int *numbers, t_our_dict od)
{
	char	oword[100][100];
	int		i;

	i = 0;
	while (numbers[i] != 1453)
	{
		ft_strcpy(oword[i], ft_match(numbers[i], od));
		i++;
	}
	oword[i][0] = '\0';
	i = 0;
	while (oword[i][0] != '\0')
	{
		if (oword[i][0] != 'z')
		{
			ft_putstr(oword[i]);
			if (oword[i + 1][0] != '\0')
				write(1, "-", 1);
		}
		i++;
	}
}

void	start_program(t_our_dict od, int mynum, char *dict)
{
	int	*numbers;
	int	i;

	od = init_struct(od);
	od = ft_bringarr(od, dict, 500);
	if (find_in_nums(mynum, od) != -1)
		ft_putstr(turn_to_word(find_in_nums(mynum, od), od));
	else
	{
		numbers = ft_parse_number(mynum);
		i = 0;
		ft_putoword(numbers, od);
	}
}
