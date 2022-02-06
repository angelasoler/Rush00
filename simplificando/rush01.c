/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fviana <fviana@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:31:15 by fviana            #+#    #+#             */
/*   Updated: 2022/02/06 02:57:10 by fviana           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void rush(int x, int y);

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
		write(1, &v, 1);
		index++;
	}
	write(1, &lf, 1);
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
		write(1, &v, 1);
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
		write(1, &v, 1);
		index++;
	}
	write(1, &lf, 1);
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
		write(1, &lf, 1);
	}
	if (y > 1)
	{
		last(x);
	}
}
