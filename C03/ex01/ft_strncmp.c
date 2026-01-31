/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:38:12 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/31 14:38:20 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n -1 && s1[i] == s2[i] && s1[1] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	text1[10] = "aaabbbccc";
	char	text2[13] = "aazabbbccceee";
	unsigned int	n;
	int	res;

	n = 7;
	res = ft_strncmp(text1, text2, n);
	printf("%d", res);
	return (0);
}*/
