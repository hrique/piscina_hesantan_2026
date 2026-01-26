/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validates.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 17:39:10 by refernan          #+#    #+#             */
/*   Updated: 2026/01/25 20:45:29 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible_buildings(int grid[6][6], int pos, char dir);

int	check_left(int grid[6][6], int row)
{
	int	clue;

	clue = grid[row][0];
	if (clue == 0)
	{
		return (1);
	}
	if (count_visible_buildings(grid, row, 'L') == clue)
	{
		return (1);
	}
	return (0);
}

int	check_right(int grid[6][6], int row)
{
	int	clue;

	clue = grid[row][5];
	if (clue == 0)
	{
		return (1);
	}
	if (count_visible_buildings(grid, row, 'R') == clue)
	{
		return (1);
	}
	return (0);
}

int	check_top(int grid[6][6], int column)
{
	int	clue;

	clue = grid[0][column];
	if (clue == 0)
	{
		return (1);
	}
	if (count_visible_buildings(grid, column, 'T') == clue)
	{
		return (1);
	}
	return (0);
}

int	check_base(int grid[6][6], int column)
{
	int	clue;

	clue = grid[5][column];
	if (clue == 0)
	{
		return (1);
	}
	if (count_visible_buildings(grid, column, 'B') == clue)
	{
		return (1);
	}
	return (0);
}

int	check_clues(int grid[6][6], int row, int column)
{
	if (column == 4)
	{
		if (check_left(grid, row) == 0 || check_right(grid, row) == 0)
		{
			return (0);
		}
	}
	if (row == 4)
	{
		if (check_top(grid, column) == 0 || check_base(grid, column) == 0)
		{
			return (0);
		}
	}
	return (1);
}
