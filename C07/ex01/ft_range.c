#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*a_range;
	int	i;

	range = max - min;
	if (range <= 0)
	{
		a_range = NULL;
		return (a_range);
	}
	a_range = (int *)malloc(range * sizeof(int));
	i = 0;
	while (min < max)
	{
		a_range[i] = min;
		i++;
		min++;
	}
	return (a_range);
}
