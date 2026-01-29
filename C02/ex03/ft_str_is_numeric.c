/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:18:54 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/28 18:45:12 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	string[6] = "asadas";
	int	i;

	i = ft_str_is_numeric(string) + '0';
	write(1, &i, 1);
	return (0);
}*/
