/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsousa <lsousa@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:38:58 by lsousa            #+#    #+#             */
/*   Updated: 2022/02/07 01:46:23 by lsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char v);

void	first(int x)
{
	char	v;
	int		index;

	index = 1;
	while (index <= x)
	{
		if (index == 1)
		{
			v = 'A';
		}
		if (index > 1 && index < x)
		{
			v = 'B';
		}
		if (index == x && x > 1)
		{
			v = 'C';
		}
		ft_putchar(v);
		index++;
	}
	ft_putchar('\n');
}

void	intern(int x)
{
	char	v;
	int		index;

	index = 1;
	while (index <= x)
	{
		if (index == 1 || (index == x && x > 1))
		{
			v = 'B';
		}
		if (index > 1 && index < x)
		{
			v = ' ';
		}
		ft_putchar(v);
		index++;
	}
}

void	last(int x)
{
	char	v;
	int		index;

	index = 1;
	while (index <= x)
	{
		if (index == 1)
		{
			v = 'C';
		}
		if (index > 1 && index < x)
		{
			v = 'B';
		}
		if (index == x && x > 1)
		{
			v = 'A';
		}
		ft_putchar(v);
		index++;
	}
	ft_putchar('\n');
}	

void	rush(int x, int y)
{
	int		index;

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
		ft_putchar('\n');
	}
	if (y > 1)
		last(x);
}
