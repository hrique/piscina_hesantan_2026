/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:25:56 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/27 19:01:08 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	ascii_div;
	int	ascii_mod;

	a = 6;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	ascii_div = (div + '0');
	ascii_mod = (mod + '0');
	write(1, &ascii_div, 1);
	write(1, "\n", 1);
	write(1, &ascii_mod, 1);
	return (0);
}*/
