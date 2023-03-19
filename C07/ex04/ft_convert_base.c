#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base2(int nbr, char *base_to);

int	ft_basecheck(char *base)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (base[i])
	{
		while (base[k])
		{
			if (base[k] <= 32 || base[k] == 127
				|| base[k] == '-' || base[k] == '+')
				return (0);
			if (base[k] == base[i] && (i != k))
				return (0);
			k++;
		}
		i++;
		k = i + 1;
	}
	return (1);
}

int	find_digit(char s, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == s)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	i;
	int	result;
	int	n;

	i = 0;
	result = 0;
	n = 1;
	while (nbr[i] == ' ' || (nbr[i] <= 13 && nbr[i] >= 9))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			n *= -1;
		i++;
	}
	while (find_digit(nbr[i], base) != -1)
	{
		result *= ft_strlen(base);
		result += find_digit(nbr[i], base);
		i++;
	}
	return (result * n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*converted_number;

	if (ft_basecheck(base_from) == 0 || ft_basecheck(base_to) == 0)
		return (NULL);
	if (ft_strlen(base_from) < 2 || ft_strlen(base_to) < 2)
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	converted_number = ft_convert_base2(number, base_to);
	return (converted_number);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	char *str = ft_convert_base(argv[1], argv[2] , argv[3]);
	printf("%s", str);
	return (0);
}
