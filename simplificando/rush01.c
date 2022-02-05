#include <unistd.h>

void	rush(int x)
{
	char	v;
	int index;

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

}