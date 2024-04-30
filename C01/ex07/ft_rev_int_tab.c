/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:15:55 by giguney           #+#    #+#             */
/*   Updated: 2024/02/06 18:47:17 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab [j];
		tab[j] = temp;
		i++;
		j--;
	}
}
int main()
{
	int tab[] = {0, 1, 2, 3, 4,};
	ft_rev_int_tab(tab, 5);
	printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}