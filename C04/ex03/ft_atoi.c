int	multiple(int j, int i, char *str, int n)
{
	int		multiple;
	int		number;

	multiple = 1;
	number = 0;
	while (j >= i)
	{
		number += (str[j] - 48) * multiple;
		j--;
		multiple *= 10;
	}
	if (n % 2 != 0)
		number = -number;
	return (number);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (str[i] && !(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	j = i;
	while (str[j] && (str[j] >= '0' && str[j] <= '9'))
		j++;
	return (multiple(j - 1, i, str, n));
}

#include <stdio.h>
int main(int argc, char **argv)
{
    int a = ft_atoi(argv[1]);
    printf("%d", a);
    return (0);
}
