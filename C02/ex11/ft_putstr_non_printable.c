#include <unistd.h>

void	write_hexa(int a)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef"[a / 16], 1);
	write(1, &"0123456789abcdef"[a % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 31 || str[i] > 127)
		{
			write_hexa(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
