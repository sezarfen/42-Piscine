void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		holder_one;
	int		holder_two;

	i = 1;
	while (i <= (size / 2))
	{
		holder_one = tab[size - i];
		holder_two = tab[i - 1];
		tab[size - i] = holder_two;
		tab[i - 1] = holder_one;
		i++;
	}
}
