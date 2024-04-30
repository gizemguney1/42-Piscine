/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:08:15 by giguney           #+#    #+#             */
/*   Updated: 2024/01/27 20:19:37 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_putchar(char c);

void	printf_char_n_times(int nn, char bb)
{
	while (nn > 0)
	{
		ft_putchar(bb);
		nn--;
	}
}

void	print_middle_rows(int leng)
{
	ft_putchar('|');
	if (leng == 2)
	{
		ft_putchar('|');
	}
	else if (leng >= 3)
	{
		printf_char_n_times(leng - 2, ' ');
		ft_putchar('|');
	}
}

void	print_first_rows(int leng)
{
	ft_putchar('o');

	 if (leng >= 3)
	{
		printf_char_n_times(leng - 2, '-');
		ft_putchar('o');
	}
}

void	print_last_rows(int leng, int deep)
{
	if (deep >= 3)
	{
		ft_putchar ('o');
		
		 if (leng >= 3)
		{
			printf_char_n_times(leng - 2, '-');
			ft_putchar('o');
		}
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 2;
	//first_rows
	print_first_rows(x);
	ft_putchar('\n');
	//middle_rows
	while (i < y)
	{
		print_middle_rows(x);
		i++;
		ft_putchar('\n');
	}
	//last_rows
	print_last_rows(x, y);
	ft_putchar('\n');
}
