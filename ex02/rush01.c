/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviana <fviana@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:31:15 by fviana            #+#    #+#             */
/*   Updated: 2022/02/06 22:27:39 by fviana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char v);

void	first(int x)
{
	char	v;
	int		index;
	char	lf;

	lf = 10;
	index = 1;
	while (index <= x)
	{
		if ((index == 1) || (index == x && x > 1))
		{
			v = 'A';
		}
		// if (index == x && x > 1)
		// {
		// 	v = 92;
		// }
		if (index > 1 && index < x)
		{
			v = 'B';
		}
		ft_putchar(v);
		index++;
	}
	ft_putchar(lf);
}

void	intern(int x)
{
	char	v;
	int		index;

	index = 1;
	while (index <= x)
	{
		if ((index == 1) || (index == x && x > 1))
		{
			v = 'B';
		}
		if (index > 1 && index < x)
		{
			v = ' ';
		}
		// if (index == x && x > 1)
		// {
		// 	v = '*';
		// }
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
		if ((index == 1) || (index == x && x > 1))
		{
			v = 'C';
		}
		// if (index == x && x > 1)
		// {
		// 	v = '/';
		// }
		if (index > 1 && index < x)
		{
			v = 'B';
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
	if (y < 0)
	{
		y = 0;
		x = y;
	}
	if (y != 0)
		first(x);
	while (index < y)
	{
		intern(x);
		index++;
		ft_putchar(lf);
	}
	if (y > 1)
		last(x);
}
