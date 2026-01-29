/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 19:10:13 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/28 19:21:10 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 97) || (str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	text[6] = "aaa";
		int	i;

	i = ft_str_is_lowercase(text) + '0';
	write(1, &i, 1);
	return (0);
}*/
