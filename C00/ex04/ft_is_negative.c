/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:39:23 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/17 13:17:47 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter_n;
	char	letter_p;

	letter_n = 'N';
	letter_p = 'P';
	if (n < 0)
	{
		write(1, &letter_n, 1);
	}
	else if (n >= 0)
	{
		write(1, &letter_p, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative (-5);
	return (0);
}
*/
