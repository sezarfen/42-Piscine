/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdundar <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:11:45 by fdundar           #+#    #+#             */
/*   Updated: 2023/02/16 13:55:45 by fdundar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else
		return (ft_power(nb, power - 1) * nb);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*atoi_base_atoi(char *str)
{
	int	i;
	int n;
	int j;

	j = 0;
	n = 0;
	i = 0;
	while (str[i] == " " && (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	return (str + i);
}	

#include <stdio.h>
int	ft_atoi_base()
{  // "  -++-+3jf4"  "0123jf"

	// str yi farklı bir atoiden geçireceğiz
	// str ve base uzunluğu bulup str ye indexleme gerekecek
	// (246)8 lik sistem bulduğumu varsayalım -> 01234567 sistem
	char str[] = "  -++-+4j";
	char *ptr = atoi_base_atoi(str); // 4j
	char base[] = "012345hj";
	int blen = ft_strlen(base);
	int slen = ft_strlen(ptr);
	int	i;
	int c;
	int result;

	i = 0;
	c = 0;
	result = 0;
	while (str[i]) // ikili while'ı farklı base verirse diye
	{ 
		while (base[c])
		{
			if (str[i] == base[c])
				result += c * ft_power(blen, slen - i - 1);
			c++;
		}
		i++;
		c = 0;
	}
	printf("%d", result);
}

int main(void)
{
	ft_atoi_base();
	return (0);
}
