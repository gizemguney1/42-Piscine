/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:31:08 by giguney           #+#    #+#             */
/*   Updated: 2024/02/13 18:59:14 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc > 1)
	{
		while (argv[j])
		{
			while (argv[j][i])
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			i = 0;
			j++;
		}
	}
}
