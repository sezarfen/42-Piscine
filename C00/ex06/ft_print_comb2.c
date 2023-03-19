#include <unistd.h>

void	write_inside(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8')
	{
		write(1, ", ", 2);
	}
}

void	write_func(char a, char b, char c, char d)
{
	while (a <= '9' )
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					write_inside(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			b++;
			d = b + 1;
			c = a;
		}
		a++;
		b = '0';
		c = a;
		d = b + 1;
	}
	write(1, "\n", 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	write_func(a, b, c, d);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
