/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 16:41:33 by hesantan          #+#    #+#             */
/*   Updated: 2026/02/05 19:44:01 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = argc -1;
	if (argc == 1)
		return (0);
	while (i > 0)
	{
		c = 0;
		while (argv[i][c] != '\0')
		{
			write (1, &argv[i][c], 1);
			c++;
		}
		i--;
		write (1, "\n", 1);
	}
	return (0);
}
