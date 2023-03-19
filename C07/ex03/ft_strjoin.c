#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*concate_all(char **strs, char *sep, char *str, int size)
{
	int	i;
	int	j;
	int	k;
	int	m;

	j = 0;
	i = 0;
	k = 0;
	m = 0;
	while (i < size)
	{
		while (strs[i][j])
			str[k++] = strs[i][j++];
		i++;
		j = 0;
		while (sep[j] && m < size - 1)
			str[k++] = sep[j++];
		m++;
		j = 0;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		total_len;
	char	*str;

	i = 0;
	k = 0;
	total_len = 0;
	if (size <= 0)
	{
		str = (char *)malloc(1);
		return (str);
	}
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	while (k < size - 1)
	{
		total_len += ft_strlen(sep);
		k++;
	}
	str = (char *)malloc(total_len * sizeof(char) + 1);
	return (concate_all(strs, sep, str, size));
}
