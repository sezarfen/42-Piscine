#include <stdlib.h>

int	ft_strlen(char *str);

int	ft_nbrlen(long nbr, int blen)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr /= blen;
	}
	return (i);
}

char	*convert_nest(long nbr, char *base, int nbr_len)
{
	int		base_len;
	char	*converted;
	long	nbr2;

	nbr2 = nbr;
	base_len = ft_strlen(base);
	converted = (char *)malloc(nbr_len);
	while (nbr2 != 0)
	{
		converted[nbr_len - 1] = base[nbr2 % base_len];
		nbr2 /= base_len;
		nbr_len--;
	}
	free(converted);
	return (converted);
}

char	*ft_convert_base2(int nbr, char *base_to)
{
	long	number;
	int		nbr_len;
	int		n;
	char	*converted;

	nbr_len = 0;
	n = 1;
	number = nbr;
	if (number < 0)
	{
		nbr_len++;
		number = -number;
		n *= -1;
	}
	nbr_len += ft_nbrlen(number, ft_strlen(base_to));
	converted = convert_nest(number, base_to, nbr_len);
	if (n == -1)
		converted[0] = '-';
	return (converted);
}
