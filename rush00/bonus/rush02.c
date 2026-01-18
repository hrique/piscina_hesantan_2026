/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:40:02 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/18 16:52:59 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_conditions(int x, int y, int countx, int county)
{
	if (county == 1 && countx == 1 || county == 1 && countx == x)
	{
		ft_putchar('A');
	}
	else if ((county == y && countx == 1) || (county == y && countx == x))
	{
		ft_putchar('C');
	}
	else if (county == 1 || county == y || countx == 1 || countx == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	countx;
	int	county;

	county = 1;
	if (y > 0 && x > 0)
	{
		while (county <= y)
		{
			countx = 1;
			while (countx <= x)
			{
				ft_conditions (x, y, countx, county);
				countx++;
			}
			ft_putchar ('\n');
			county++;
		}
	}
	else
	{
		write (1, "Informe apenas numeros positivos\n", 33);
	}
}
