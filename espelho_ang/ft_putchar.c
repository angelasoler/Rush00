#include <unistd.h>

void	ft_putchar(char *c, int x)
{
	write(1, c, x);
}