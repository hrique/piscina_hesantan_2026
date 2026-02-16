#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int size;

    i = 0;
    if (min >= max)
    {
        *range = NULL;
        return (0);
    }
    size = max - min;
    *range = (int *) malloc(size * sizeof(int));
    if (*range == NULL)
        return (-1);
    while (i < size)
    {
        (*range)[i] = min;
        min++;
        i++;
    }
    return (size);
}

// #include <stdio.h>

// int main(void)
// {
//     int *numbers = NULL;
//     int size;
//     int i = 0;
//     int min = -8;
//     int max = 10;

//     size = ft_ultimate_range(&numbers, min, max);
//     printf("%d\n", size);
//     if (size == -1)
//         return (1);
//     if (size == 0 || numbers == NULL)
//         return (0);
//     while (i < size)
//     {
//         printf("%d", numbers[i]);
//         if (i < size - 1)
//             printf(", ");
//         i++;
//     }
//     printf("\n");
//     free(numbers);
//     return (0);
// }