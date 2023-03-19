/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdundar <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:06:06 by fdundar           #+#    #+#             */
/*   Updated: 2023/02/13 13:10:49 by fdundar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}
