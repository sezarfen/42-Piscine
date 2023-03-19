/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diarr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdundar <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:30:53 by fdundar           #+#    #+#             */
/*   Updated: 2023/02/19 22:30:55 by fdundar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnc.h"

void	clean_arrs(char *nums, char *words)
{
	int	i;

	i = 0;
	while (nums[i])
	{
		nums[i] = '\0';
		i++;
	}
	i = 0;
	while (words[i])
	{
		words[i] = '\0';
		i++;
	}
}

char	*start_dict(void)
{
	char	*dict;
	int		f;
	int		readbytes;

	dict = (char *)malloc(20000);
	f = open("./numbers.dict", O_RDONLY);
	readbytes = read(f, dict, 20000);
	if (readbytes == -1)
		write(1, "Dict Error\n", 11);
	free(dict);
	return (dict);
}

char	*start_difdict(char *ndict)
{
	char	*dict;
	int		f;
	int		readbytes;

	dict = (char *)malloc(20000);
	f = open(ndict, O_RDONLY);
	readbytes = read(f, dict, 20000);
	if (readbytes == -1)
		write(1, "Dict Error\n", 11);
	free(dict);
	return (dict);
}

int	ft_atoi(char *str)
{
	int	i;
	int	ae;
	int	num;

	i = 0;
	ae = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			ae = ae * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - '0');
		i++;
	}
	num = num * ae;
	return (num);
}

char	*ft_itoa(int num)
{
	int		temp;
	int		digits;
	char	*str;

	temp = num;
	digits = 0;
	str = (char *)malloc (10);
	while (temp != 0)
	{
		digits++;
		temp /= 10;
	}
	str = (char *) malloc ((digits + 1) * sizeof(char));
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
		str[digits--] = '\0';
	}
	while (num > 0)
	{
		str[--digits] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
