/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:21:19 by giguney           #+#    #+#             */
/*   Updated: 2024/02/14 22:21:22 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*a;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	a = malloc(sizeof(int) * (i));
	if (a == NULL)
		return (-1);
	i = 0;
	while (max > min)
	{
		a[i] = min;
		min++;
		i++;
	}
	*range = a;
	return (i);
}
