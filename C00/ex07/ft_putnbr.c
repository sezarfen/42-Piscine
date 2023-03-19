#include <unistd.h>

void	nested_first(int nb, int i, int is_negative)
{
	char	string[29];
	int		b;
	int		a;

	b = 0;
	while (i > 0)
	{
		a = nb % 10;
		string[i - 1] = a + '0';
		i--;
		b++;
		nb = nb / 10;
	}
	if (is_negative == 1)
	{
		write(1, "-", 1);
	}
	while (b > 0)
	{
		write(1, &string[i], 1);
		i++;
		b--;
	}
	write(1, "\n", 1);
}

void	nested_second(int nb, int is_negative)
{
	int		number;
	int		i;

	number = nb;
	i = 0;
	while (number % 2147483648 > 10)
	{
		i++;
		number = number / 10;
	}
	i++;
	nested_first(nb, i, is_negative);
}

void	ft_putnbr(int nb)
{
	int		is_negative;

	if (nb == 2147483647)
	{
		write(1, "2147483647", 10);
	}
	else if (nb == -2147483647)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		is_negative = 0;
		if (nb < 0)
		{
			nb = nb * -1;
			is_negative = 1;
		}
		nested_second(nb, is_negative);
	}
}

int	main(void)
{
	ft_putnbr(-213447648);
	return (0);
}
