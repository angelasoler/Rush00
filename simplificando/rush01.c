#include <unistd.h>
void	first(int x)
{
	char	v;
	int index;
	char lf;

	lf = 10;
	index = 1;

	while (index <= x)
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

void intern(int x, int y)
{
	char	v;
	int index;
	char lf;
	int i_2;

	i_2 = y;
	lf = 10;
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
		if (index == (x + 1))
		{
			write(1, &lf , 1);
			while (i_2 >= 0)
			{
				index = 1;
				i_2--;
			}
		}
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
	first(x);
	intern(x, y);
	last(x);
}
