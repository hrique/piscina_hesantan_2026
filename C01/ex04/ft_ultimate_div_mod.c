/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:38:53 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/27 19:01:56 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_rest;

	temp_div = *a / *b;
	temp_rest = *a % *b;
	*a = temp_div;
	*b = temp_rest;
}

/*int	main(void)
{
	int	n1;
	int	n2;
	int	n1_ascii;
	int	n2_ascii;

	n1 = 6;
	n2 = 2;
	ft_ultimate_div_mod(&n1, &n2);
	n1_ascii = n1 + '0';
	write(1, &n1_ascii, 1);
	write(1, ",", 1);
	n2_ascii = n2 + '0';
	write(1, &n2_ascii, 1);
	return (0);
}*/
