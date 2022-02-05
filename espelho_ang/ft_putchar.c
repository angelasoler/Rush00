#include <unistd.h>

void	ftputchar(char c)
{
	write(1, &c, 1);
}