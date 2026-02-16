#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	x;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	x = (nb % 10) + '0';
	write(1, &x, 1);
}

int *ft_range(int min, int max)
{
    int i;
    int *numbers;
    int size;

    if (min >= max)
        return (NULL);
    size = max - min;
    numbers = (int *) malloc(size * sizeof(int));
    if (numbers == NULL)
        return (NULL);
    i = 0;
    while (min < max)
    {
        numbers[i] = min;
        i++;
        min++;
    }
    return (numbers);
}

// #include <stdio.h>
// int main(void)
// {
//     int min;
//     int max;
//     int *numbers;
//     int i;

//     min = -8;
//     max = 20;
//     numbers = ft_range(min, max);
//     i = 0;
//     while (i < (max - min))
//     {
//         ft_putnbr(numbers[i]);
//         write(1, " ", 1);
//         i++;
//     }
//     write(1, "\n", 1);
//     free(numbers);
//     return (0);
// }