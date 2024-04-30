/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:44:42 by giguney           #+#    #+#             */
/*   Updated: 2024/02/06 18:22:43 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

int main()
{
int a; //sıradan bir değişken 
int *b;
int **c; //3 tane pointer değişkeni oluşturduk
int ***d;
b = &a;
c = &b;
d = &c;
ft_ultimate_ft(d);
printf("%d\n",a);
}