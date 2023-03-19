int	ft_find_next_prime(int nb)
{
	int	i;
	int	a;

	a = 0;
	while (nb)
	{
		i = nb / 2;
		while (i > 1)
		{
			if (nb % i == 0)
				a = 1;
			i--;
		}
		if (a != 1)
			return (nb);
		a = 0;
		nb++;
	}
	return (1);
}
