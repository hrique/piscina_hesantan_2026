/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:27:39 by hesantan          #+#    #+#             */
/*   Updated: 2026/02/03 20:50:30 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return(0);
	if (nb == 0)
		return (1);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	int	num;
	int	result;

	num = 5;
	result = ft_recursive_factorial(num);
	printf("%d", result);
	return (0);
}*/
