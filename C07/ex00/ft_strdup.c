/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:20:37 by giguney           #+#    #+#             */
/*   Updated: 2024/02/14 22:24:06 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*a;
	int		j;
	int		i;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	a = (char *)malloc(sizeof(char) * (j + 1));
	if (a == NULL)
		return (NULL);
	while (i < j)
	{
		a[i] = src[i];
		i++;
	}
	a[j] = '\0';
	return (a);
}