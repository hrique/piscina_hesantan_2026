/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:55:08 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/28 18:55:47 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (((str[i] >= 65) && (str[i] <= 90))
			|| ((str[i] >= 97) && (str[i] <= 122)))
			i++;
		else
		{
			alpha = 0;
			i++;
		}
	}
	if (alpha == 1)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	text[6] = "abc";
	int		ret;

	ret = ft_str_is_alpha(text) + '0';
	write(1, &ret, 1);
	return (0);
}*/
