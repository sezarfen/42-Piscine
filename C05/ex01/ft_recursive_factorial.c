int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (1);
	else
		return ft_recursive_factorial(nb - 1) * nb;
}
