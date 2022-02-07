/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:24:15 by lsousa            #+#    #+#             */
/*   Updated: 2022/02/07 02:02:58 by asoler           ###   ########.fr       */
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
		if (index == 1 || (index == x && x > 1))
		{
			v = 'o';
		}
		if (index > 1 && index < x)
		{
			v = '-';
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
			v = 124;
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
	char	lf;

	lf = 10;
	index = 1;
	while (index <= x)
	{
		if (index == 1 || (index == x && x > 1))
		{
			v = 'o';
		}
		if (index > 1 && index < x)
		{
			v = '-';
		}
		ft_putchar(v);
		index++;
	}
	ft_putchar(lf);
}

void	rush(int x, int y)
{
	int	index;

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
