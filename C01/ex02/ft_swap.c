void	ft_swap(int *a, int *b)
{
	int		old_a;

	old_a = *a;
	*a = *b;
	*b = old_a;
}
