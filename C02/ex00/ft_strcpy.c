/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:36:49 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/28 15:03:34 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[6];
	char	*src;
	int		i;

	i = 0;
	src = "haha!";
	ft_strcpy(dest, src);
	while (dest[i] != '\0')
	{
		i++;
	}
	write(1, dest, i);
	return (0);
}*/
