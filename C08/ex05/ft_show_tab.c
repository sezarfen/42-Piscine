#include <unistd.h>
#include "ft_stock_str.h"

void	fn_putchar(char x)
{
	write(1, &x, 1);
}

void	fn_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

void	fn_putnbr(int nbr)
{
	if (nbr > 9)
	{
		fn_putnbr(nbr / 10);
	}
	fn_putchar(nbr % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	n;

	n = 0;
	while (par[n].str)
	{
		fn_putstr(par[n].str);
		fn_putnbr(par[n].size);
		fn_putchar('\n');
		fn_putstr(par[n].copy);
		n++;
	}
}
