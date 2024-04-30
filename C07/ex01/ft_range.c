/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:20:18 by giguney           #+#    #+#             */
/*   Updated: 2024/02/14 22:20:22 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;

	if (min >= max)
		return (0);
	i = max - min;
	a = (int *)malloc(sizeof(int) * (i));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
