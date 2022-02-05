#include <unistd.h>
void	first(int x)
{
	char	v;
	int index;
	char lf;

	lf = 10;
	index = 1;

	while (index <= x) //=enquanto
	{
		if (index == 1)
		{
			v = '/';
		}
		if (index == x)
		{
			v = 92; //código ascii de barra invertida
		}
		if (index > 1 && index < x)
		{
			v = '*';
		}
		write(1, &v, 1);
		index++;
	}
	write(1, &lf , 1);
}

void intern(int x)
{
	char	v;
	int index;

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
		if (index == x)
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
	int index;
	char	lf;

	lf = 10;
	index = 1;


	while (index <= x)
	{
		if (index == 1)
		{
			v = 92;
		}
		if (index == x)
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
	write(1, &lf , 1);
}

void	rush(int x, int y)
{
	int index;
	char lf;

	lf = 10;
	index = 2;

	first(x);
	while (index < y)
	{
		intern(x);
		index++;
		write(1, &lf , 1);
	}
	last(x);
}
