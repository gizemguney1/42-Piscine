/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:00:05 by giguney           #+#    #+#             */
/*   Updated: 2024/02/12 20:00:56 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	b;

	b = 0;
	s = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		b = (str[i] - 48) + (b * 10);
		i++;
	}
	return (b * s);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_atoi("+++-ggg--53ffsfsdf"));
}
