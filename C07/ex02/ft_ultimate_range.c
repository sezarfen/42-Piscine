#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a_range;
	int	m_range;
	int	i;

	m_range = max - min;
	if (m_range <= 0)
	{
		*range = NULL;
		return (0);
	}
	a_range = (int *)malloc(m_range);
	if (a_range == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		a_range[i] = min;
		min++;
		i++;
	}
	*range = a_range;
	return (m_range);
}
