/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesantan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:44:27 by hesantan          #+#    #+#             */
/*   Updated: 2026/01/27 19:03:28 by hesantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;
	int	count_rev;

	count = 0;
	count_rev = (size -1);
	while (count < (size / 2))
	{
		temp = tab[count];
		tab[count] = tab[count_rev];
		tab[count_rev] = temp;
		count++;
		count_rev--;
	}
}

/*int	main(void)
{
	int	vetor[6] = {1, 2, 3, 4, 5, 6};
	int	size;
	int	count;

	count = 0;
	size = 6;
	ft_rev_int_tab(vetor, size);
	while (count < (size))
	{
		printf("%d", vetor[count]);
		count++;
	}
	return (0);
}*/
