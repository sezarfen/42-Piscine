#include <unistd.h>

void	ft_print_combn(int n)  // NOT COMPLETED!!!!
{
	// n -> 3 olduğunu varsayalım
	int	numbers[10];
	int		number;
	int		i;
	int		in;
    int     vin;

	number = n;
	i = 0;
	in = n;
    vin = n;

	while(n > 0)
	{
        n--;
		numbers[i] = i + '0';
		i++;
	}
	// numbers -> [0,1,2,....] olmalı
	// numbers[i]. elemanı artmalı
	// sonra [i] ==  9 ?  [i-1]. eleman ++ olmalı [i] = [i-1] + 1 olmalı
	// ana sayıyı tutmak için ekstra bir int number kenarda tutuluyor
    while(vin > 0)
    {
        while (numbers[i-1] <= '9')
        {
            while (n < in)
            {
                write(1, &numbers[n], 1);
                n++;
            }
            numbers[i-1] = numbers[i-1] + 1;
            write(1, ", ", 2);
            n = 0;
        }
        i--;
        numbers[i-1] = numbers[i-1] + 1;
        numbers[i] = numbers[i-1] + 1;
        vin--;
        if(numbers[i-1] != '8')
        {
            i++;
        }
    }
}

int	main(void)
{
	ft_print_combn(4);
    return (0);
}
