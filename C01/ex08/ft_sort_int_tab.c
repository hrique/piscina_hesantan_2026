/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:54:44 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/27 18:53:14 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			temp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = temp;
			count = 0;
		}
		else
		{
			count++;
		}
	}
}

/*int	main(void)
{
	int	vetor[6] = {3, 2, 1, 5, 6, 4};
	int	size;
	int	i;

	i = 0;
	size = 6;
	ft_sort_int_tab(vetor, size);
	while (i < size)
	{
		printf("%d", vetor[i]);
		i++;
	}
	return (0);
}*/
