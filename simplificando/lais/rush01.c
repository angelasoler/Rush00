/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:31:15 by fviana            #+#    #+#             */
/*   Updated: 2022/02/06 17:53:26 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char v);

void	line(int x, int y)
{	
	char	print_vars[3]; // recebe variaveis ordenadas para manda no ft_purchar
	char	mani_vars[4]; // variaveis q vamos manipular
	int		index;
	int		ind_y;
	
	mani_vars[0] = '/'
	mani_vars[1] = 
	mani_vars[3]
	mani_vars[4]
	
	index = 1;
	ind_y = 1;
	if (ind_y != y)
	{
		{
			/ \ *  " "
			while (index > 1 && index < x )
			{
				vars[index-1] = '*' || = ' '
				index++;
			}
			var[index-1] = 92; || '*'
		}
		index_y++;
	}
	
	while (index <= x)
	{
		if (index == 1)
		{
			v = '/';
		}
		if (index == x && x > 1)
		{
			v = 92;
		}
		if (index > 1 && index < x)
		{
			v = '*';
		}
		ft_putchar(vars);
		index++;
	}
}

void	intern(int x)
{
	char	v;
	int		index;

	index = 1;
	while (index <= x)
	{
		if (index == 1)
		{
			v = '*';
		}
		if (index > 1 && index < x)
		{
			v = ' ';
		}
		if (index == x && x > 1)
		{
			v = '*';
		}
		ft_putchar(v);
		index++;
	}
}

void	last(int x)
{
	char	v;
	int		index;
	char	lf;

	lf = 10;
	index = 1;
	while (index <= x)
	{
		if (index == 1)
		{
			v = 92;
		}
		if (index == x && x > 1)
		{
			v = '/';
		}
		if (index > 1 && index < x)
		{
			v = '*';
		}
		ft_putchar(v);
		index++;
	}
	ft_putchar(lf);
}

void	rush(int x, int y)
{
	int		index;
	char	lf;

	lf = 10;
	index = 2;

	if (y == 0 )
	{
		x = y;
	}
	first(x);
	while (index < y)
	{
		intern(x);
		index++;
		ft_putchar(lf);
	}
	last(x);
	
}
