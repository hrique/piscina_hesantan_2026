/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 20:29:09 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/28 20:31:25 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	text[6] = "AAAA";
	int		i;

	i = 0;
	ft_strlowcase(text);
	while (text[i] != '\0')
	{
		i++;
	}
	write(1, &text, i);
	return (0);
}*/