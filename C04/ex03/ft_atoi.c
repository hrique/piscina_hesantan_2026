/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:28:58 by hesantan          #+#    #+#             */
/*   Updated: 2026/02/02 19:32:50 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_valid(char x)
{
	int	num;

	num = 0;
	if (x == ' ' || (x >= 9 && x <= 13) || x == '+' || x == '-')
		num = 0;
	else if (x >= '0' && x <= '9')
		num = 0;
	else
		num = 1;
	return (num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] != '\0' && ft_is_valid(str[i]) == 0)
	{
		if (str[i] == '-')
		{
			neg = neg * -1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 10) + (str[i] - '0');
		}
		i++;
	}
	num = num * neg;
	return (num);
}

/*#include <stdio.h>

int	main(void)
{
	int	num;
	char	text[] = "---+--+1234ab567";

	num = ft_atoi(text);
	printf("%d", num);
	return (0);
}*/
