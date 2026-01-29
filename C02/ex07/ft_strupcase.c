/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 20:04:28 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/28 20:20:48 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	text[6] = "11111";
	int		i;

	i = 0;
	ft_strupcase(text);
	while (text[i] != '\0')
	{
		i++;
	}
	write(1, &text, i);
	return (0);
}*/
