#include <unistd.h>
void	first(int x)
{
	char	v;
	int index;
	// char lf;

	// lf = 10;
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
		// write(1, &lf , 1);
		index++;
	}
}

void intern(int x)
{
	char	v;
	int index;
	// char lf;

	// lf = 10;
	index = 1;

	while (index <= x)
	{
		if (index == 1 || index == x)
		{
			v = '*';
		}
		if (index > 1 && index < x)
		{
			v = ' ';
		}
		write(1, &v, 1);
		// write(1, &lf , 1);
		index++;
	}
}

void	last(int x)
{
	char	v;
	int index;
	// char	lf;

	// lf = 10;
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
		// write(1, &lf , 1);
		index++;
	}
}

void	rush(int y)
{
	first(1);
	intern(y);
	last(1);
}
