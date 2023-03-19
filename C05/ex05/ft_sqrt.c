int	ft_sqrt(int nb)
{
	int		i;

	if (nb < 0)
		return (0);

	i = nb / 2;
	while (i > 0)
	{
		if (i*i == nb)
			return (i);
		i--;
	}
	return (0);
}
