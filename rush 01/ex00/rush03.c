#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		col_c;
	int		row_c;

	if (x < 1 || y < 1)
		return ;
	row_c = 1;
	while (row_c <= y)
	{
		col_c = 1;
		while (col_c <= x)
		{
			if ((col_c == 1 && row_c == 1) || (col_c == 1 && row_c == y))
				ft_putchar('A');
			else if ((col_c == x && row_c == 1) || (col_c == x && row_c == y))
				ft_putchar('C');
			else if ((col_c > 1 && col_c < x) && (row_c > 1 && row_c < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			col_c++;
		}
		ft_putchar('\n');
		row_c++;
	}
}
