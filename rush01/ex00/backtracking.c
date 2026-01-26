/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: refernan <refernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 17:34:59 by refernan          #+#    #+#             */
/*   Updated: 2026/01/25 19:03:34 by refernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_clues(int grid[6][6], int row, int column);
int	resolver(int grid[6][6], int position);

int	get_building(int grid[6][6], int pos, int i, char dir)
{
	if (dir == 'L')
		return (grid[pos][i]);
	if (dir == 'R')
		return (grid[pos][5 - i]);
	if (dir == 'T')
		return (grid[i][pos]);
	if (dir == 'B')
		return (grid[5 - i][pos]);
	return (0);
}

int	is_repeated(int grid[6][6], int row, int column, int num)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (grid[row][i] == num && i != column)
			return (1);
		if (grid[i][column] == num && i != row)
			return (1);
		i++;
	}
	return (0);
}

int	count_visible_buildings(int grid[6][6], int pos, char dir)
{
	int	count;
	int	max_height;
	int	i;
	int	building;

	count = 0;
	max_height = 0;
	i = 1;
	while (i <= 4)
	{
		building = get_building(grid, pos, i, dir);
		if (building > max_height)
		{
			count++;
			max_height = building;
		}
		i++;
	}
	return (count);
}

int	try_number(int grid[6][6], int position, int row, int col)
{
	int	num;

	num = 1;
	while (num <= 4)
	{
		if (is_repeated(grid, row, col, num) == 0)
		{
			grid[row][col] = num;
			if (check_clues(grid, row, col) == 1)
			{
				if (resolver(grid, position + 1) == 1)
					return (1);
			}
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	resolver(int grid[6][6], int position)
{
	int	row;
	int	col;

	if (position == 16)
		return (1);
	row = (position / 4) + 1;
	col = (position % 4) + 1;
	return (try_number(grid, position, row, col));
}
