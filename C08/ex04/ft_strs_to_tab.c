#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dup;

	dup = (char *)malloc(ft_strlen(str) + 1);
	if (dup == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*transforms;
	int					i;

	transforms = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (transforms == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		transforms[i].size = ft_strlen(av[i]);
		transforms[i].str = av[i];
		transforms[i].copy = ft_strdup(av[i]);
		i++;
	}
	transforms[i].str = 0;
	transforms[i].copy = 0;
	return (transforms);
}
