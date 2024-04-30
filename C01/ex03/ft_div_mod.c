/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giguney <giguney@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:56:33 by giguney           #+#    #+#             */
/*   Updated: 2024/02/06 17:27:32 by giguney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b; //bölme işleminin sonucunu div işaretçisinin işaret ettigi yere yaz
	*mod = a % b; // kalanı mod işaretçisinin işaret ettiği yere yaz
	}
}

int main()
{
	int a = 10;
	int b =  5;
	int div;
	int mod;
 ft_div_mod(a ,b,&div,&mod);
 printf("%d %d",div,mod);
}
