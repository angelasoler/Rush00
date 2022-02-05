/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviana <fviana@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:42:11 by fviana            #+#    #+#             */
/*   Updated: 2022/02/05 21:02:37 by fviana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include "ft_putchar.c"

void	rush(int x, int y)
{
	char	v;
	//char f;
	char i[2];
	
	v = 92; 
	//f = 20;
	
	i[1] = '1'; //

	while (i[1] != y) // Enquanto Y é diferente do valor inserido
	{
		i[0] ='1';
		while (i[0] !=x) 
		{
			if (i[0] == 1 && i[1]== 1) //Se X é igual a 1 e Y igual a 1, adicionar barra normal
			{
				ft_putchar('/');
				i[0]++;
			}	
			if ((i[0] == x && i[1] == 1) || (i[0] == 1 && i[1] == y)) //Se linha (x) é igual a x inserido e 
			{
				ft_putchar(v); //código ascii de barra invertida
				i[1]++;	
				i[0]++;
			}			
			if ((i[0] == 1 && i[0] == x) || (i[0] == x && i[1] == 1))
			{
				ft_putchar('*');
				i[1]++;	
				i[0]++;
			}	
			else 
			{
				ft_putchar(' '); //blank space
				i[1]++;	
				i[0]++;
			}	
		}
		ft_putchar('\n');
		
	}

}