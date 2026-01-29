/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:26:44 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/28 19:40:22 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char text[6] = "AAA1";
	int	i;

	i = ft_str_is_uppercase(text) + '0';
	write(1, &i, 1);
	return (0);
}*/
