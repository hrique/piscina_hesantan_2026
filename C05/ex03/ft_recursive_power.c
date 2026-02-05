/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:12:45 by hesantan          #+#    #+#             */
/*   Updated: 2026/02/04 16:48:18 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	if (power > 1)
		result = ft_recursive_power(nb, (power - 1));
	result = result * nb;
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int	num = 3;
	int	power = 3;
	int result;

	result = ft_recursive_power(num, power);
	printf("%d", result);
	return (0);
}*/
