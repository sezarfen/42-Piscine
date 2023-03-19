void	ft_sort_int_tab(int *tab, int size)
{
	int		a;
	int		b;
	int		current_number;

	a = 0;
	b = a + 1;
	while (a < size)
	{
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				current_number = tab[a];
				tab[a] = tab[b];
				tab[b] = current_number;
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
