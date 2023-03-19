int	ft_str_is_alpha(char *str)
{
	int		i;
	int		is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			is_alpha = 0;
		i++;
	}
	return (is_alpha);
}
