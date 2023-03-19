int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		is_lowercase;

	i = 0;
	is_lowercase = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			is_lowercase = 0;
		i++;
	}
	return (is_lowercase);
}
