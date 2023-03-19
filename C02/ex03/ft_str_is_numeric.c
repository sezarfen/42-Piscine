int	ft_str_is_numeric(char *str)
{
	int		i;
	int		is_numeric;

	i = 0;
	is_numeric = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			is_numeric = 0;
		i++;
	}
	return (is_numeric);
}
