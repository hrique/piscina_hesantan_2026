/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: refernan <refernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 17:46:42 by refernan          #+#    #+#             */
/*   Updated: 2026/01/25 18:35:06 by refernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_grid(int grid[6][6])
{
	int		row;
	int		column;
	char	digit;

	row = 1;
	while (row <= 4)
	{
		column = 1;
		while (column <= 4)
		{
			digit = grid[row][column] + '0';
			write(1, &digit, 1);
			if (column < 4)
				write (1, " ", 1);
			column++;
		}
		write (1, "\n", 1);
		row++;
	}
}
