/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdundar <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:31:53 by fdundar           #+#    #+#             */
/*   Updated: 2023/02/19 22:31:54 by fdundar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnc.h"

int	ft_power(int nbr, int power)
{
	if (power == 0)
		return (1);
	else
		return (ft_power(nbr, power - 1) * nbr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*ft_parse_nest(char *str, int *numbers, int k, int i)
{
	i = 0;
	while (i < ft_strlen(str))
	{
		k = ft_parse_2(str, numbers, k, i);
		i++;
	}
	if (numbers[k - 3] < 20 && numbers[k - 3] >= 10)
		if (numbers[k - 2] == 1)
			numbers[k - 2] = 1453;
	numbers[k] = 1453;
	return (numbers);
}

int	ft_parse_2(char *str, int *numbers, int k, int i)
{
	if ((ft_strlen(str) - i) % 3 == 0)
	{
		numbers[k++] = str[i] - 48;
		if (str[i] != '0')
			numbers[k++] = 100;
	}
	if ((ft_strlen(str) - i) % 3 == 2 && str[i] != '0')
	{
		if (str[i] == '1')
		{
			numbers[k++] = 10 + (str[i++ + 1] - 48);
			numbers[k++] = ft_power(10, ft_strlen(str) - i - 1);
		}
		else
			numbers[k++] = (str[i] - 48) * 10;
	}
	else if ((ft_strlen(str) - i) % 3 == 1)
	{
		numbers[k++] = str[i] - 48;
		if (ft_strlen(str) - i >= 3 && (str[i] != '0' || i < 3))
			numbers[k++] = ft_power(10, ft_strlen(str) - i - 1);
	}
	return (k);
}

int	*ft_parse_number(int mynum)
{
	int		*numbers;
	char	*str;

	str = ft_itoa(mynum);
	numbers = (int *)malloc(100 * sizeof(int));
	return (ft_parse_nest(str, numbers, 0, 0));
}
