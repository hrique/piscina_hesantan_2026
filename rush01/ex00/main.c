/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:17:56 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/25 20:54:54 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		resolver(int grid[6][6], int position);
void	print_grid(int grid[6][6]);

int	ft_atoi(char *str, int *args)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (((str[i] > '0') && (str[i] <= '4')) || (str[i] == ' '))
	{
		if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			args[count] = (str[i] - '0');
			i++;
			count++;
		}
	}
	return (i);
}

void	init_grid(int grid[6][6])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	mount_grid(int grid[6][6], int args[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		grid[0][i + 1] = args[i];
		grid[5][i + 1] = args[i + 4];
		grid[i + 1][0] = args[i + 8];
		grid[i + 1][5] = args[i + 12];
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	args[16];
	int	grid[6][6];
	int	count;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	count = ft_atoi(argv[1], args);
	if (count != 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	init_grid(grid);
	mount_grid(grid, args);
	if (resolver(grid, 0))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	return (0);
}
