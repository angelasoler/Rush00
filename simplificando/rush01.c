/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviana <fviana@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:31:15 by fviana            #+#    #+#             */
/*   Updated: 2022/02/06 04:52:33 by fviana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"

// void rush(int x, int y);
void ft_putchar(char v);

void ft_putc(char lf);

void	first(int x)
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
		ft_putchar(v);
		index++;
	}
	ft_putc(lf);
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
	ft_putc(lf);;
}

void	rush(int x, int y)
{
	int		index;
	char	lf;

	lf = 10;
	index = 2;
	first(x);
	while (index < y)
	{
		intern(x);
		index++;
		ft_putc(lf);
	}
	if (y > 1)
	{
		last(x);
	}
}
