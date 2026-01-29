/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:54:56 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/28 20:03:05 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 33) || (str[i] == 127))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char text[6] = "asb";
	int	i;

	i = ft_str_is_printable(text) + '0';
	write(1, &i, 1);
	return (0);
}*/