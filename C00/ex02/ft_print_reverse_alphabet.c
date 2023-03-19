#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		i;

	i = 122;
	while (i > 96)
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
