#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	sort_argv(char **argv, int argc)
{
	int		i;
	int		c;
	char	*temp;

	i = 0;
	c = i + 1;
	while (i < argc)
	{
		while (c < argc)
		{
			if (ft_strcmp(argv[i], argv[c]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[c];
				argv[c] = temp;
			}
			c++;
		}
		i++;
		c = i + 1;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	sort_argv(argv, argc);
	while (i < argc)
	{
		while (argv[i][c])
		{
			write(1, &argv[i][c], 1);
			c++;
		}
		write(1, "\n", 1);
		c = 0;
		i++;
	}
	return (0);
}
