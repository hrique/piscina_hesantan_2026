/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:54:56 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/22 12:21:57 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comma_spc(char c, char d, char u)
{
	if (!(c == '7' && d == '8' && u == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				ft_comma_spc(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
//
//int	main(void)
//{
//	ft_print_comb();
//	return (0);
//}
