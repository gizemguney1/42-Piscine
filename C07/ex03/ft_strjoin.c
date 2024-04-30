/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:21:56 by giguney           #+#    #+#             */
/*   Updated: 2024/02/14 22:33:38 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_total_len(int size, char **strs, char *sep) //stringin toplam uzunluğu
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = (char *)malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
	i = 0;
	c = 0;
	while (i < size) //size girdiğimiz kelime sayısı
	{
		j = 0;
		while (strs[i][j])
			s[c++] = strs[i][j++]; //burda strsyi kopyalıyo
		j = 0;
		while (sep[j] && i != size - 1)
			s[c++] = sep[j++]; //burdada sepleri kopyalıyo
		i++;
	}
	s[c] = '\0';
	return (s);
}
