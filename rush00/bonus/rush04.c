/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamsilva <jamsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:25:02 by jamsilva          #+#    #+#             */
/*   Updated: 2026/01/17 18:30:37 by jamsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_conditions(int countx, int county, int x, int y)
{
	if (((countx == 1) && (county == 1)) || ((countx == x) && (county == y)))
	{
		ft_putchar('A');
	}
	else if (((countx == x) && (county == 1)) || ((countx == 1 && county == y)))
	{
		ft_putchar('C');
	}
	else if (countx == 1 || countx == x || county == 1 || county == y)
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

	countx = 1;
	county = 1;
	if (x > 0 && y > 0)
	{
		while (county <= y)
		{
			while (countx <= x)
			{
				ft_conditions (countx, county, x, y);
				countx++;
			}
			ft_putchar ('\n');
			countx = 1;
			county++;
		}
	}
	else
	{
		write (1, "Informe apenas numeros positivos", 32);
	}
}
