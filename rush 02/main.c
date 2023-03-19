/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdundar <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:31:17 by fdundar           #+#    #+#             */
/*   Updated: 2023/02/19 22:31:20 by fdundar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fnc.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_isvalid(char *str);
int	terminate_program(char *str, int kind);

int	main(int argc, char **argv)
{
	char		*dict;
	int			mynum;
	t_our_dict	od;	

	dict = (char *)malloc(20000);
	mynum = 0;
	if (argc == 2)
	{
		if (terminate_program(argv[1], 1) == -1)
			return (0);
		dict = start_dict();
		mynum = ft_atoi(argv[1]);
	}
	else if (argc == 3)
	{
		if (terminate_program(argv[2], 2) == -1)
			return (0);
		dict = start_difdict(argv[1]);
		mynum = ft_atoi(argv[2]);
	}
	else
		write(1, "Error\n", 6);
	od = (t_our_dict){0, 0, "", {0}, 0, "", {{'\0'}}, 0};
	start_program(od, mynum, dict);
}

int	ft_isvalid(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) > 10 || (ft_strlen(str) == 10 && str[0] > '4'))
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	terminate_program(char *arg_str, int kind)
{
	if (!ft_isvalid(arg_str))
	{
		if (kind == 1)
			write(1, "Error\n", 6);
		if (kind == 2)
			write(1, "Dict Error\n", 11);
		return (-1);
	}
	return (1);
}
