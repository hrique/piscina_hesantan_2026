/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <hesantan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:38:12 by hesantan          #+#    #+#             */
/*   Updated: 2026/02/04 14:43:03 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] == s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	text1[10] = "aaaabbbccc";
	char	text2[13] = "aaaabbbccceee";
	unsigned int	n;
	int		res;

	n = 7;
	res = ft_strncmp(text1, text2, n);
	printf("%d", res);
	return (0);
}*/