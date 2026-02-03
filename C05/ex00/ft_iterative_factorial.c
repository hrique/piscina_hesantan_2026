/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:24:10 by hesantan          #+#    #+#             */
/*   Updated: 2026/02/03 18:59:55 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);	
	while (nb > 1)
	{
		num = num * nb;
		nb--;
	}
	return (num);
}

/*#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * (- 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = nb + '0';
		write (1, &nb, 1);
	}
}


int	main(void)
{
	int	num;
	int	result;

	num = 10;
	result = ft_iterative_factorial(num);
	ft_putnbr(result);
	return (0);
}*/

